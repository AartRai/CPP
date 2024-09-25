//Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array.

#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(const vector<int>& arr) {
    int maxCount = 0;
    int currentCount = 0;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    int n;
    cout << "Enter the number of elements in the binary array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the binary array (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxConsecutiveOnes(arr);
    cout << "Maximum number of consecutive ones: " << result << endl;

    return 0;
}
