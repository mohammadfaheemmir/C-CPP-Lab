// Write a program in C++ which creates a single-inheritance hierarchy of Person, Employee and Teacher classes and creates instances of each class using new and stores them in an array of Person *

#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {}

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Person() {
        cout << "Person destructor called for " << name << endl;
    }
};

// Derived class: Employee
class Employee : public Person {
private:
    string jobTitle;

public:
    Employee(const string& name, int age, const string& jobTitle)
        : Person(name, age), jobTitle(jobTitle) {}

    void display() const override {
        cout << "Employee - Name: " << name << ", Age: " << age
            << ", Job Title: " << jobTitle << endl;
    }

    ~Employee() {
        cout << "Employee destructor called for " << name << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(const string& name, int age, const string& subject)
        : Person(name, age), subject(subject) {}

    void display() const override {
        cout << "Teacher - Name: " << name << ", Age: " << age
            << ", Subject: " << subject << endl;
    }

    ~Teacher() {
        cout << "Teacher destructor called for " << name << endl;
    }
};

int main() {
    // Array of Person pointers
    Person* people[3];

    // Dynamically create instances
    people[0] = new Person("Alice", 30);
    people[1] = new Employee("Bob", 40, "Software Engineer");
    people[2] = new Teacher("Charlie", 35, "Mathematics");

    // Display information
    cout << "Details of all persons:" << endl;
    for (int i = 0; i < 3; ++i) {
        people[i]->display();
    }

    // Clean up memory
    for (int i = 0; i < 3; ++i) {
        delete people[i];
    }

    return 0;
}
