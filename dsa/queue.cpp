#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node *front, *rear;
public:
    Queue() { front = rear = NULL; }

    void enqueue(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        if (!rear) { front = rear = newNode; return; }
        rear->next = newNode;
        rear = newNode;
        cout << val << " enqueued." << endl;
    }

    void dequeue() {
        if (!front) { cout << "Queue Underflow\n"; return; }
        Node* temp = front;
        front = front->next;
        if (!front) rear = NULL;
        cout << temp->data << " dequeued." << endl;
        delete temp;
    }

    void display() {
        Node* temp = front;
        cout << "Queue: ";
        while (temp) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "NULL\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10); q.enqueue(20); q.display();
    q.dequeue(); q.display();
    return 0;
}