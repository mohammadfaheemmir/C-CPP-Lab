// Write a program in C++ to define class Person which having multiple data members for storing the different details of the person e.g. name, age, address, height etc.

#include <iostream>
#include <string>
using namespace std;

// Define the Person class
class Person {
private:
    string name;
    int age;
    string address;
    float height;

public:
    // Default constructor
    Person() : name(""), age(0), address(""), height(0.0f) {}

    // Parameterized constructor
    Person(string n, int a, string addr, float h) : name(n), age(a), address(addr), height(h) {}

    // Member function to input person details
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // To clear the newline character from input buffer
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter height (in cm): ";
        cin >> height;
    }

    // Member function to display person details
    void displayDetails() const {
        cout << "\nPerson Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Address: " << address << endl;
        cout << "Height: " << height << " cm" << endl;
    }
};

int main() {
    Person person1;

    // Input person details
    cout << "Enter details of the person:" << endl;
    person1.inputDetails();

    // Display person details
    person1.displayDetails();

    return 0;
}
