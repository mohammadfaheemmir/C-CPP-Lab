// Write a program in C++ which creates a multiple-inheritance hierarchy of Teacher classes derived from both Person, Employee classes. Each class must implement a Show () member function and utilize scope-resolution operator./

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

    void Show() const {
        cout << "Person - Name: " << name << ", Age: " << age << endl;
    }
};

// Base class: Employee
class Employee {
protected:
    string jobTitle;

public:
    Employee(const string& jobTitle) : jobTitle(jobTitle) {}

    void Show() const {
        cout << "Employee - Job Title: " << jobTitle << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person, public Employee {
private:
    string subject;

public:
    Teacher(const string& name, int age, const string& jobTitle, const string& subject)
        : Person(name, age), Employee(jobTitle), subject(subject) {}

    void Show() const {
        cout << "Teacher Details:" << endl;
        // Use scope resolution to call Show() from specific base classes
        Person::Show();
        Employee::Show();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create a Teacher object
    Teacher teacher("Alice", 35, "Lecturer", "Mathematics");

    // Call the Teacher's Show() method
    teacher.Show();

    return 0;
}
