// Step 2: Implement the Message Queue:
// Create a class for your message queue. This class should handle the operations like enqueue and dequeue.


#include <queue>
#include <mutex>
#include <condition_variable>

class MessageQueue {
public:
    // Enqueue a message
    void enqueue(const Message& message) {
        std::unique_lock<std::mutex> lock(mutex_);
        queue_.push(message);
        lock.unlock();
        condition_.notify_one();
    }

    // Dequeue a message
    Message dequeue() {
        std::unique_lock<std::mutex> lock(mutex_);
        // Wait until a message is available
        condition_.wait(lock, [this] { return !queue_.empty(); });

        Message message = queue_.front();
        queue_.pop();
        return message;
    }

private:
    std::queue<Message> queue_;
    std::mutex mutex_;
    std::condition_variable condition_;
};
