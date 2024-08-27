//Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
//Assuming that string contains only lowercase.

#include <iostream>
#include <string>
using namespace std;

void count(const string &str, int &vowel, int &consonant) {
    vowel = 0;
    consonant= 0;

    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonant++;
        }
    }
}

int main() {
    string inputString;
    int vowels, consonants;

    cout << "Enter a string: ";
    cin >> inputString;

    count(inputString, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
