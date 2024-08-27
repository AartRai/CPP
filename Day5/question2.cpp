//Ques-02 Write a C++ function that takes a string as input and reverses it.

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    reverseString(inputString);

    cout << "Reversed string: " << inputString << endl;

    return 0;
}
