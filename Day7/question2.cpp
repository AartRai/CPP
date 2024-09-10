//Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int size) {
//     for (int i = 1; i < size; ++i) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             --j;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int size;

//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[100];
    
//     cout << "Enter the elements of the array:";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     insertionSort(arr, size);

//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void bubblesort(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[i] > arr[j+1]){
//                 swap(arr[i],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int arr[5]={4,8,1,9,3};
//     bubblesort(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int rollno;

    Student(string n, int a,int r){
        name=n;
        age=a;
        rollno=r;
    }
    void print(){
        cout<<"Name: "<<name<<" Age: "<<age<<" Roll no: "<<rollno<<endl;
    }
};

int main(){
    Student s1("annika",21,2);
    s1.print();
    return 0;
}