//Ques 2: Write a program that defines a Rectangle class with a copy constructor

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called!" << endl;
    }

    int getArea() const {
        return length * width;
    }

    void displayDimensions() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    
    cout << "Original Rectangle:" << endl;
    rect1.displayDimensions();
    cout << "Area: " << rect1.getArea() << endl;

    Rectangle rect2 = rect1;

    cout << "\nCopied Rectangle:" << endl;
    rect2.displayDimensions();
    cout << "Area: " << rect2.getArea() << endl;

    return 0;
}
