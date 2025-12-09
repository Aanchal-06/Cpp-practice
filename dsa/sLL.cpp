#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Simple Function-based approach 
void insert(Node** head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    insert(&head, 30);
    insert(&head, 20);
    insert(&head, 10);
    cout << "Linked List: ";
    display(head);
    return 0;
}