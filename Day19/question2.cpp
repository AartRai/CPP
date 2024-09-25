//Ques 2: Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream inFile("sample.txt");

    if (inFile.is_open()) {
        cout << "Contents of the file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open the file." << endl;
        return 1;
    }

    return 0;
}
