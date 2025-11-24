// Step 3: Create Producers and Consumers
// Implement functions or classes that act as producers and consumers. Producers enqueue messages, and consumers dequeue messages.


// Producer function
void producer(MessageQueue& messageQueue, int messageType, const std::string& payload) {
    Message message;
    message.messageType = messageType;
    message.payload = payload;

    messageQueue.enqueue(message);
}

// Consumer function
void consumer(MessageQueue& messageQueue) {
    while (true) {
        Message message = messageQueue.dequeue();
        // Process the message
        // ...
    }
}
