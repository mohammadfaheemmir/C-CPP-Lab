// Implement a function which receiver a pointer to a Student struct and sets the values of its fields

#include <stdio.h>
#include <string.h>

// Define the Student struct
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to set values for the Student struct
void setStudentDetails(struct Student *student, int id, const char *name, float marks) {
    student->id = id;                          // Set the ID
    strncpy(student->name, name, sizeof(student->name) - 1); // Set the name (ensure no buffer overflow)
    student->name[sizeof(student->name) - 1] = '\0'; // Null-terminate the string
    student->marks = marks;                    // Set the marks
}

// Function to display the Student details
void displayStudentDetails(const struct Student *student) {
    printf("Student ID: %d\n", student->id);
    printf("Student Name: %s\n", student->name);
    printf("Student Marks: %.2f\n", student->marks);
}

int main() {
    struct Student student;

    // Set student details using the function
    setStudentDetails(&student, 101, "John Doe", 92.5);

    // Display student details
    displayStudentDetails(&student);

    return 0;
}
