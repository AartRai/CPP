//Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertSorted(int value) {
        Node* newNode = new Node(value);

        if (!head || head->data >= value) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next && current->next->data < value) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << "->";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    void insertFromUser(int n) {
        int value;
        cout << "Enter the elements in sorted order: ";
        for (int i = 0; i < n; i++) {
            cin >> value;
            insertSorted(value);
        }
    }
};

int main() {
    LinkedList list;
    int n, insertValue;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    list.insertFromUser(n);

    cout << "Enter the value to insert in sorted order: ";
    cin >> insertValue;

    cout << "Original List: ";
    list.display();

    list.insertSorted(insertValue);

    cout << "Updated List: ";
    list.display();

    return 0;
}
