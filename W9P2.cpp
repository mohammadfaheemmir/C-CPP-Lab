// Write a C++ program to demonstrate the use of scope resolution operator?

#include <iostream>
using namespace std;

// Global variable
int x = 50;

class Demo {
private:
    int x; // Local to the class

public:
    // Constructor to initialize the class member
    Demo(int val) : x(val) {}

    // Function to display the values
    void displayValues() {
        cout << "Value of local x (class member): " << x << endl;
        cout << "Value of global x (using scope resolution): " << ::x << endl;
    }

    // Static function using the scope resolution operator
    static void staticFunction() {
        cout << "Inside a static function. Global x: " << ::x << endl;
    }
};

// Global function
void displayGlobalX() {
    cout << "Accessing global x in a global function: " << ::x << endl;
}

int main() {
    // Local variable in main
    int x = 10;

    cout << "Value of local x (in main): " << x << endl;
    cout << "Value of global x (using scope resolution): " << ::x << endl;

    // Create an object of the Demo class
    Demo obj(100);

    // Call member function to demonstrate scope resolution
    obj.displayValues();

    // Call a static function using scope resolution
    Demo::staticFunction();

    // Call a global function
    displayGlobalX();

    return 0;
}
