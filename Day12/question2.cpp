//Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Initial linked list: ";
    printLinkedList(head);

    insertAtEnd(head, 40);

    cout << "Linked list after insertion: ";
    printLinkedList(head);

    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
