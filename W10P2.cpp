// Write a C++ program to demonstrate the use of inline, friend functions and this keyword.

#include <iostream>
using namespace std;

// Class declaration
class Demo {
private:
    int value;

public:
    // Constructor to initialize value
    Demo(int val) : value(val) {}

    // Inline member function to get the value
    inline int getValue() const {
        return value; // Inline function
    }

    // Member function to set the value using `this` keyword
    void setValue(int val) {
        this->value = val; // Using `this` keyword to refer to the class member
    }

    // Declare a friend function
    friend void showValue(const Demo& obj);
};

// Friend function definition
void showValue(const Demo& obj) {
    cout << "Friend function accessing private member: " << obj.value << endl;
}

int main() {
    // Create an object of the class
    Demo obj(10);

    // Using inline function to get the value
    cout << "Inline function result: " << obj.getValue() << endl;

    // Modify the value using a member function that uses `this` keyword
    obj.setValue(20);
    cout << "Value after modification using `this` keyword: " << obj.getValue() << endl;

    // Access private member using a friend function
    showValue(obj);

    return 0;
}
