//Ques 1: You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n*logn) complexity. Take all the required input from user.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool hasPairWithSumQuadratic(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

bool hasPairWithSumLogarithmic(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) {
            return true;
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    if (hasPairWithSumQuadratic(arr, target)) {
        cout << "YES (O(n^2) approach)" << endl;
    } else {
        cout << "NO (O(n^2) approach)" << endl;
    }

    if (hasPairWithSumLogarithmic(arr, target)) {
        cout << "YES (O(n log n) approach)" << endl;
    } else {
        cout << "NO (O(n log n) approach)" << endl;
    }

    return 0;
}
