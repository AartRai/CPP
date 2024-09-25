//Ques 1: Write C++ program that create a stack using Array.

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

    int peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return array[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(5); 

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60); 

    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    stack.display();

    return 0;
}
