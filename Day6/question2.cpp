//Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

#include<iostream>
using namespace std;

int main(){
    int size;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    int odd,even;
    cout<<"Enter the array:";
    for(int i=0;i<size;i++ ){
        cin>>arr[i];
    }

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    cout<<"Number of odd numbers: "<<odd<<endl;
    cout<<"Number of even numbers: "<<even<<endl;

    return 0;
}