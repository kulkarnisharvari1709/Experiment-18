#include <iostream>
using namespace std;

#define SIZE 100  // maximum size of the queue

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool isFull() {
        return rear == SIZE - 1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // Enqueue operation (Add)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        if (front == -1) front = 0; // first insertion
        rear++;
        arr[rear] = value;
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue operation (Delete)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " dequeued from queue." << endl;
        front++;
    }

    // Display elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Driver code
int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
