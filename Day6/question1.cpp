//Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

#include<iostream>
using namespace std;

int main(){
    int size;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    int sum;
    cout<<"Enter the array:";
    for(int i=0;i<size;i++ ){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum<<endl;
    return 0;
}