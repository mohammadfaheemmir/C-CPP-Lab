// Write a program in C++ to define class complex which having two data members viz real and imaginary part?

#include <iostream>
using namespace std;

// Define the Complex class
class Complex {
private:
    float real;      // Real part
    float imaginary; // Imaginary part

public:
    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imaginary(i) {}

    // Member function to input complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    // Member function to display complex number
    void display() const {
        cout << real;
        if (imaginary >= 0)
            cout << " + " << imaginary << "i" << endl;
        else
            cout << " - " << -imaginary << "i" << endl;
    }

    // Function to add two complex numbers
    Complex add(const Complex &c) const {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex &c) const {
        return Complex(real - c.real, imaginary - c.imaginary);
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    // Add two complex numbers
    result = c1.add(c2);
    cout << "\nAddition: ";
    result.display();

    // Subtract two complex numbers
    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.display();

    return 0;
}
