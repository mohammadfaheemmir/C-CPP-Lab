// Write a program to demonstrate the use of different access specifiers.

#include <iostream>
using namespace std;

// Base class to demonstrate access specifiers
class Demo {
private:
    int privateData; // Accessible only within the class

protected:
    int protectedData; // Accessible within the class and derived classes

public:
    int publicData; // Accessible anywhere

    // Constructor to initialize data members
    Demo(int priv, int prot, int pub) {
        privateData = priv;
        protectedData = prot;
        publicData = pub;
    }

    // Public function to access private data
    void showPrivateData() {
        cout << "Private Data: " << privateData << endl;
    }

    // Protected function
protected:
    void showProtectedData() {
        cout << "Protected Data: " << protectedData << endl;
    }
};

// Derived class to demonstrate protected access
class Derived : public Demo {
public:
    // Constructor to initialize the base class
    Derived(int priv, int prot, int pub) : Demo(priv, prot, pub) {}

    // Access protected data from base class
    void accessProtected() {
        cout << "Accessing protected data in derived class: " << protectedData << endl;
        showProtectedData(); // Accessing protected function
    }
};

int main() {
    // Create an object of the base class
    Demo obj(10, 20, 30);

    cout << "Accessing public data: " << obj.publicData << endl;
    obj.showPrivateData(); // Accessing private data through a public function

    // Create an object of the derived class
    Derived derivedObj(40, 50, 60);
    derivedObj.accessProtected(); // Accessing protected data from derived class

    // Direct access to public data
    cout << "Accessing public data from derived object: " << derivedObj.publicData << endl;

    // Error: Cannot access private or protected data directly
    // cout << obj.privateData; // Uncommenting this will cause a compilation error
    // cout << obj.protectedData; // Uncommenting this will cause a compilation error

    return 0;
}
