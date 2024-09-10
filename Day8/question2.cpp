//Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

#include <iostream>
#include <string>
using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            ++count;
        }
    }
    return count;
}

int main() {
    string inputString;
    char inputChar;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Enter a character to count: ";
    cin >> inputChar;

    int count = countCharacter(inputString, inputChar);

    cout << " Count " << count << endl;

    return 0;
}
