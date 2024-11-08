//Write a C++ program to implement virtual function.
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void inputDimensions() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void inputDimensions() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape;
    int choice;

    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        Rectangle rectangle;
        rectangle.inputDimensions();
        shape = &rectangle;
        cout << "\nArea of Rectangle: " << shape->area() << endl;
    }
    else if (choice == 2) {
        Circle circle;
        circle.inputDimensions();
        shape = &circle;
        cout << "\nArea of Circle: " << shape->area() << endl;
    }
    else {
        cout << "Invalid choice. Exiting program." << endl;
    }

    return 0;
}
