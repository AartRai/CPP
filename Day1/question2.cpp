//Ques-02 -Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

#include<iostream>
using namespace std;

int main(){
    int g1,g2,g3,g4,g5;
    cout<<"Enter grade 1: ";
    cin>>g1;

    cout<<"Enter grade 2: ";
    cin>>g2;

    cout<<"Enter grade 3: ";
    cin>>g3;

    cout<<"Enter grade 4: ";
    cin>>g4;

    cout<<"Enter grade 5: ";
    cin>>g5;

    cout<<(g1+g2+g3+g4+g5)/5<<endl;
    return 0;
}