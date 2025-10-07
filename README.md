Aim

To implement a queue data structure in C++.
To add (enqueue) and delete (dequeue) members of the queue.
To check overflow and underflow (empty queue) conditions.
Software Used VS Code

Theory

A queue is a linear data structure that follows the FIFO (First In First Out) principle.
The first element added to the queue will be the first one to be removed.
Operations:
Enqueue (Add) – Insert an element at the rear of the queue.
Dequeue (Delete) – Remove an element from the front of the queue.
Overflow – Occurs when trying to insert into a full queue.
Underflow – Occurs when trying to remove from an empty queue.
Applications:

Job scheduling
Resource management in operating systems
Handling requests in printing or network systems
Algorithm

Enqueue (Add) Operation:

Start.
Check if the queue is full (overflow).
If not full, insert the element at the rear.
Increment the rear pointer.
Stop.
Dequeue (Delete) Operation:

Start.
Check if the queue is empty (underflow).
If not empty, remove the element from the front.
Increment the front pointer.
Stop.
Display Queue Elements:

Start.
If the queue is empty, display message.
Otherwise, traverse from front to rear and display elements.
Stop.
Conclusion

Successfully implemented a queue in C++ with enqueue and dequeue operations.
Overflow and underflow conditions were handled correctly.
Demonstrates the FIFO principle effectively.
Useful in real-life applications like task scheduling and buffering.
