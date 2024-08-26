//Ques - 01 - Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.


#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    string b;
    cout<<"Enter the fisrst string: ";
    cin>>a;
    cout<<"Enter the second string: ";
    cin>>b;

    cout<<a + b<<endl;
    return 0;
}