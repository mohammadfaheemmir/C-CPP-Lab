// Write a program to demonstrate the swapping the fields of two structures using pointers?

#include <stdio.h>
#include <string.h>

// Define a structure
typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

// Function to swap the fields of two structures
void swapStudents(Student *s1, Student *s2) {
    // Temporary variables for swapping
    int tempId;
    char tempName[50];
    float tempMarks;

    // Swap `id`
    tempId = s1->id;
    s1->id = s2->id;
    s2->id = tempId;

    // Swap `name`
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap `marks`
    tempMarks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = tempMarks;
}

int main() {
    // Create two Student structures
    Student student1 = {1, "Alice", 85.5};
    Student student2 = {2, "Bob", 90.0};

    // Display initial values
    printf("Before swapping:\n");
    printf("Student 1: ID=%d, Name=%s, Marks=%.2f\n", student1.id, student1.name, student1.marks);
    printf("Student 2: ID=%d, Name=%s, Marks=%.2f\n", student2.id, student2.name, student2.marks);

    // Swap the fields of the structures
    swapStudents(&student1, &student2);

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("Student 1: ID=%d, Name=%s, Marks=%.2f\n", student1.id, student1.name, student1.marks);
    printf("Student 2: ID=%d, Name=%s, Marks=%.2f\n", student2.id, student2.name, student2.marks);

    return 0;
}
