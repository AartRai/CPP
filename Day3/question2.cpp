//Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factorial=1;
    if(n<0){
        cout<<"factorial does not exist"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            factorial*=i;
        }    
    }

    cout<<"The factorial of "<<n<<" is: "<<factorial<<endl;

    return 0;
}