// Ques 1: Write C++ program to create a doubly linkedlist and insert a node at any position . Input Linkedlist: 2<->4<->5 ,p = 2, x = 6 Output: 2 4 5 6, Explanation: p = 2, and x = 6. So, 6 is
// inserted after p, i.e, at position 3
// (0-based indexing).

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtPosition(int pos, int value) {
        Node* newNode = new Node(value);
        if (pos == 0) {
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 0; i < pos - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Position out of bounds" << endl;
            delete newNode; // clean up memory
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != nullptr) {
            current->next->prev = newNode;
        }

        current->next = newNode;
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtPosition(0, 2);
    dll.insertAtPosition(1, 4);
    dll.insertAtPosition(2, 5);
    
    int p = 2, x = 6;
    dll.insertAtPosition(p + 1, x); 

    dll.printList(); 

    return 0;
}
