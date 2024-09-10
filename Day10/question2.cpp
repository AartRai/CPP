//Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    string cleaned;
    for (char ch : str) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    int left = 0;
    int right = cleaned.size() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}

int main() {
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    bool result = isPalindrome(userInput);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
