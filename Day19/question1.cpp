//Ques 1: Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    int age;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your age: ";
    cin >> age;

    ofstream outFile("details.txt");
    if (outFile.is_open()) {
        outFile << "First Name: " << firstName << endl;
        outFile << "Last Name: " << lastName << endl;
        outFile << "Age: " << age << endl;
        outFile.close();
    } else {
        cout << "Unable to open the file for writing." << endl;
        return 1;
    }

    string line;
    ifstream inFile("details.txt");
    if (inFile.is_open()) {
        cout << "Details from the file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open the file for reading." << endl;
        return 1;
    }

    return 0;
}
