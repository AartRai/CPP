//Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"Enter the third number: ";
    cin>>num3;

    cout<<max(max(num1,num2),num3)<<endl;
    return 0;
}