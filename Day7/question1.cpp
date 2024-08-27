//Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    
    cout << "Enter the elements of the array:";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    printArray(arr, size);

    return 0;
}
