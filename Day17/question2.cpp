//Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols, sum = 0;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of all values in the array is: " << sum << endl;

    return 0;
}
