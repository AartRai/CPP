// //Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:
// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().

#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(string fName, string lName, int a) : firstName(fName), lastName(lName), age(a) {}

    string getFullName() {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("John", "Doe", 30);
    
    cout << "Full Name: " << person.getFullName() << endl;

    auto details = person.getDetails();
    string fName;
    string lName;
    int age;
    tie(fName, lName, age) = details;

    cout << "Details: First Name = " << fName << ", Last Name = " << lName << ", Age = " << age << endl;

    return 0;
}
