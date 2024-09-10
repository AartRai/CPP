//Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;  
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    string result = concatenateStrings(str1, str2);

    cout << "Concatenated result: \"" << result << "\"" << endl;

    return 0;
}
