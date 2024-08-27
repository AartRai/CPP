//Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    
    cout << "Enter the elements of the array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
