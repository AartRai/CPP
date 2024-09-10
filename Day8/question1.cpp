#include <iostream>
#include <string>
using namespace std;

int stringLength(const string &str) {
    return str.length();  
}

int main() {
    string test1;

    cout << "Enter a string: ";
    getline(cin, test1);

    cout << "Length of \"" << test1 << "\" is " << stringLength(test1) << endl;

    return 0;
}
