// Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Addition: "<< num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: "<< num1 / num2 << endl;
        cout << "Modulus: "<< num1 % num2 << endl;
    } else {
        cout << "Division and Modulus by zero are not allowed." << endl;
    }

    return 0;
}
