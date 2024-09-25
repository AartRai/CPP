//Write C++ program to demonstrate how to create dynamic variable using new keyword.


#include <iostream>
using namespace std;

void createDynamicVariable() {
    int* p = new int;

    *p = 42;

    cout << "Value of dynamically allocated variable: " << *p << endl;
    cout << "Address of dynamically allocated variable: " << p << endl;

    delete p;
}

int main() {
    createDynamicVariable();
    return 0;
}
