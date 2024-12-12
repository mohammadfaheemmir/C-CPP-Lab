// Write a program which creates Student (struct) objects using malloc and stores their pointers in an array. It must free the objects after printing their contents.

#include <stdio.h>
#include <stdlib.h>

// Define the Student struct
typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

int main() {
    int n; // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Array of pointers to Student structs
    Student **students = (Student **)malloc(n * sizeof(Student *));
    if (students == NULL) {
        perror("Memory allocation failed for student array");
        return 1;
    }

    // Create and initialize Student objects
    for (int i = 0; i < n; i++) {
        students[i] = (Student *)malloc(sizeof(Student));
        if (students[i] == NULL) {
            perror("Memory allocation failed for a Student object");
            return 1;
        }

        // Input data for the student
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i]->id);
        printf("Name: ");
        scanf(" %[^\n]", students[i]->name);
        printf("Marks: ");
        scanf("%f", &students[i]->marks);
    }

    // Print the details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("  ID: %d\n", students[i]->id);
        printf("  Name: %s\n", students[i]->name);
        printf("  Marks: %.2f\n", students[i]->marks);
    }

    // Free the allocated memory
    for (int i = 0; i < n; i++) {
        free(students[i]); // Free each student
    }
    free(students); // Free the array of pointers

    printf("\nMemory successfully freed.\n");
    return 0;
}
