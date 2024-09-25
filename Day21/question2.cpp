// Ques 2: Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present then print true otherwise print false. Input: head = [3,2,0,-4], pos = 1. Output: true. Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void createCycle(int pos) {
        if (pos < 0) return;
        Node* temp = head;
        Node* cycleNode = nullptr;
        for (int i = 0; temp != nullptr; ++i) {
            if (i == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
        }
        if (temp) {
            temp->next = cycleNode;
        }
    }

    bool hasCycle() {
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    LinkedList list;
    list.append(3);
    list.append(2);
    list.append(0);
    list.append(-4);
    
    list.createCycle(1); 

    if (list.hasCycle()) {
        cout << "true" << endl; 
    } else {
        cout << "false" << endl;
    }

    return 0;
}
