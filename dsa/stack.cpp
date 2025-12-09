#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = NULL; }

    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << val << " pushed." << endl;
    }

    void pop() {
        if (!top) { cout << "Stack Underflow\n"; return; }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped." << endl;
        delete temp;
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "NULL\n";
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.display();
    s.pop(); s.display();
    return 0;
}