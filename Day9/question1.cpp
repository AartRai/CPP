//Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.

#include <iostream>
using namespace std;

int main() {
    int myVar = 42;

    int *ptr = &myVar;

    cout << "Value of the variable (myVar) is: " << myVar << endl;

    cout << "Value of the variable (through pointer) is: " << *ptr << endl;

    return 0;
}
