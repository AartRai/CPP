//Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    void displayDetails() {
        cout << "Student Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {
    Student student1("Aarti", 101, 89.5);
    student1.displayDetails();
    return 0;
}
