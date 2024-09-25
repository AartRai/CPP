//Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string b, string m, string e, int seats) {
        brandName = b;
        model = m;
        engine = e;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car car1("Toyota", "Camry", "V6", 5);

    car1.displayInfo();

    return 0;
}
