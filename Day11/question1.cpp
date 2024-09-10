//Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

#include <iostream>
using namespace std;

bool contains(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
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

    if (contains(arr, size, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete[] arr;

    return 0;
}
