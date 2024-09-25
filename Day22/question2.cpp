//Ques 2 : Write C++ program that take n from the user the number of elements and insert all the value inside stack after inserting all value inside stack pop all the values and print. Input: n=5 values = 1,2,3,4,5 output :- 5,4,3,2,1.

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    int* array;

public:
    Stack(int size) {
        capacity = size;
        top = -1;
        array = new int[capacity];
    }

    ~Stack() {
        delete[] array;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack overflow. Unable to push " << value << endl;
            return;
        }
        array[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow. Unable to pop." << endl;
            return -1; 
        }
        return array[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Stack stack(n); 

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }

    cout << "Popped values in reverse order: ";
    while (!stack.isEmpty()) {
        cout << stack.pop();
        if (!stack.isEmpty()) {
            cout << ", "; 
        }
    }
    cout << endl;

    return 0;
}
