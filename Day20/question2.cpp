//Ques 2: Write a C++ program that take 2D array from user and then sort this array. Input n=3, m=3 array=7 4 1
//8 5 2
//9 6 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 3, m = 3;
    vector<vector<int> > array(n, vector<int>(m));
    
    cout << "Enter the elements of the array (3x3):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> array[i][j];
        }
    }

    vector<int> flatArray;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flatArray.push_back(array[i][j]);
        }
    }

    sort(flatArray.begin(), flatArray.end());

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            array[i][j] = flatArray[i * m + j];
        }
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
