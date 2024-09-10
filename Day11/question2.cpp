//Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

#include <iostream>
using namespace std;

int findIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter " << size << " integer values: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = findIndex(arr, size, target);
    cout << index << endl;

    delete[] arr;

    return 0;
}
