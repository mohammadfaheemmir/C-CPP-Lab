// Write a C++ program to create a simple calculator which can add, subtract, multiply and divide two numbers using class template.

#include <iostream>
using namespace std;

// Class template for a calculator
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    // Constructor
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    // Methods for basic arithmetic operations
    T add() const {
        return num1 + num2;
    }

    T subtract() const {
        return num1 - num2;
    }

    T multiply() const {
        return num1 * num2;
    }

    T divide() const {
        if (num2 != 0)
            return num1 / num2;
        else {
            cerr << "Error: Division by zero!" << endl;
            return static_cast<T>(0); // Return 0 as a default error value
        }
    }
};

int main() {
    // Instantiate the template with 'double' type
    Calculator<double> calc(15.5, 5.2);

    // Perform and display operations
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    // Demonstrate the template with 'int' type
    Calculator<int> intCalc(10, 3);
    cout << "\nInteger Calculator:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    return 0;
}
