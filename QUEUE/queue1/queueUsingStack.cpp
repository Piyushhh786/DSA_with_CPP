#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> inbox;  // For enqueue operation
    stack<int> outbox; // For dequeue operation

public:
    // Enqueue operation
    void enqueue(int value) {
        inbox.push(value);
    }

    // Dequeue operation
    int dequeue() {
        // If outbox is empty, transfer elements from inbox
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        // Pop the front element
        if (!outbox.empty()) {
            int front = outbox.top();
            outbox.pop();
            return front;
        } else {
            // Queue is empty
            cout << "Queue is empty!" << endl;
            return -1;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << endl; // Output: 1
    cout << q.dequeue() << endl; // Output: 2

    q.enqueue(4);

    cout << q.dequeue() << endl; // Output: 3
    cout << q.dequeue() << endl; // Output: 4

    cout << q.dequeue() << endl; // Output: Queue is empty!

    return 0;
}
