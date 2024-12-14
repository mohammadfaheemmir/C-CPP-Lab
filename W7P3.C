// Write a program to pass a pointer to a structure as a parameter to a function and return back a pointer to structure to the calling function after modifying the members of the structure?

#include <stdio.h>

// Define the structure
struct Student {
    int id;
    char name[50];
};

// Function that takes a pointer to a structure, modifies its members, and returns the pointer
struct Student* modifyStudent(struct Student* ptr) {
    // Modify the structure members
    ptr->id = 101;
    snprintf(ptr->name, sizeof(ptr->name), "John Doe");

    // Return the modified pointer to the calling function
    return ptr;
}

int main() {
    // Declare a structure variable
    struct Student student1 = {0, ""};  // Initialize with 0 and an empty string

    // Print the initial values of the structure members
    printf("Before modification:\n");
    printf("ID: %d, Name: %s\n", student1.id, student1.name);

    // Pass the pointer to the modifyStudent function
    struct Student* modifiedStudent = modifyStudent(&student1);

    // Print the modified values of the structure members
    printf("\nAfter modification:\n");
    printf("ID: %d, Name: %s\n", modifiedStudent->id, modifiedStudent->name);

    return 0;
}
