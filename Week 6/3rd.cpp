//Write a C++ program to implement binary + operator overloading.
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    // Function to input complex number details from the user
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    // Overload the + operator to add two Complex objects
    Complex operator+(const Complex &other) const {
        Complex result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    // Method to display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex num1, num2;

    // User inputs for two complex numbers
    cout << "Enter the first complex number:" << endl;
    num1.input();

    cout << "Enter the second complex number:" << endl;
    num2.input();

    // Use the overloaded + operator
    Complex result = num1 + num2;

    // Display the result
    cout << "\nThe sum of ";
    num1.display();
    cout << "and ";
    num2.display();
    cout << "is ";
    result.display();

    return 0;
}