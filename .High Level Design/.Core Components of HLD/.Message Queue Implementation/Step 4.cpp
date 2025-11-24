// Step 4: Use the Message Queue
// Create instances of the message queue, producers, and consumers, and use them in your program.


#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string>

// Thread-safe message queue
class MessageQueue {
private:
    std::queue<std::string> queue;
    std::mutex mtx;
    std::condition_variable cv;

public:
    void send(const std::string& message) {
        std::lock_guard<std::mutex> lock(mtx);
        queue.push(message);
        cv.notify_one();
    }

    std::string receive() {
        std::unique_lock<std::mutex> lock(mtx);
        // Fixed typo here: 'queue' instead of 'queu'
        cv.wait(lock, [this]() { return !queue.empty(); });
        std::string message = queue.front();
        queue.pop();
        return message;
    }
};

// Producer function
void producer(MessageQueue& mq, int id, const std::string& message) {
    std::cout << "Producer " << id << " sending: " << message << std::endl;
    mq.send(message);
}

// Consumer function
void consumer(MessageQueue& mq) {
    std::string msg = mq.receive();
    std::cout << "Consumer received: " << msg << std::endl;
}

int main() {
    MessageQueue messageQueue;

    std::thread producerThread(producer, std::ref(messageQueue), 1, "Hello, World!");
    std::thread consumerThread(consumer, std::ref(messageQueue));

    producerThread.join();
    consumerThread.join();

    return 0;
}
