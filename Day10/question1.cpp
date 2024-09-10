//Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

#include <iostream>
#include <climits>
using namespace std;

int findMax(const int arr[], int size) {
    if (size <= 0) {
        cerr << "Array size must be greater than 0." << endl;
        return INT_MIN;
    }

    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    if (size <= 0) {
        cerr << "Error: Array size must be greater than 0." << endl;
        return 1;
    }

    int *arr = new int[size];

    cout << "Enter " << size << " integer values: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int maxValue = findMax(arr, size);
    cout << "Maximum value in the array is: " << maxValue << endl;

    delete[] arr;

    return 0;
}
