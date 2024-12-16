// Write a program to instantiate the objects of the class person and class complex?/

#include <iostream>
#include <string>
using namespace std;

// Define the Person class
class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() : name(""), age(0) {}

    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {}

    // Method to input details
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // To clear the newline character
    }

    // Method to display details
    void displayDetails() const {
        cout << "Person Details:\n";
        cout << "Name: " << name << "\nAge: " << age << " years\n";
    }
};

// Define the Complex class
class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() : real(0.0), imag(0.0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Method to input values
    void inputComplex() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Method to display values
    void displayComplex() const {
        cout << "Complex Number: " << real;
        if (imag >= 0) cout << " + " << imag << "i\n";
        else cout << " - " << -imag << "i\n";
    }
};

int main() {
    // Instantiate and interact with Person
    Person p1;
    cout << "Enter details for Person:\n";
    p1.inputDetails();
    p1.displayDetails();

    cout << endl;

    // Instantiate and interact with Complex
    Complex c1;
    cout << "Enter details for Complex number:\n";
    c1.inputComplex();
    c1.displayComplex();

    return 0;
}
