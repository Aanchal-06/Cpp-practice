#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev; // Pointer to previous node
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() { head = NULL; }

    // Insert at the beginning
    void insertHead(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        cout << val << " inserted at head." << endl;
    }

    // Insert at the end
    void insertTail(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
        cout << val << " inserted at tail." << endl;
    }

    // Delete a specific node
    void deleteNode(int val) {
        if (head == NULL) return;

        Node* temp = head;

        // Find the node
        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Value not found." << endl;
            return;
        }

        // If node to be deleted is head
        if (temp == head) {
            head = temp->next;
        }

        // Change next only if node to be deleted is NOT the last node
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }

        // Change prev only if node to be deleted is NOT the first node
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }

        delete temp;
        cout << val << " deleted." << endl;
    }

    // Forward Traversal
    void displayForward() {
        Node* temp = head;
        cout << "Forward:  ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Backward Traversal (Proves the links are correct)
    void displayBackward() {
        Node* temp = head;
        if (temp == NULL) return;

        // Go to last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    
    dll.insertHead(20);
    dll.insertHead(10);
    dll.insertTail(30);
    
    dll.displayForward();  // Output: 10 -> 20 -> 30
    dll.displayBackward(); // Output: 30 -> 20 -> 10
    
    dll.deleteNode(20);
    dll.displayForward();  // Output: 10 -> 30
    
    return 0;
}