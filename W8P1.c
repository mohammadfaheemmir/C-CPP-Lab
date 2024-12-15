// Write a program to demonstrate the use of pointer to a pointer.

#include <stdio.h>

int main() {
    int num = 42;                // An integer variable
    int *ptr1 = &num;            // A pointer to the integer
    int **ptr2 = &ptr1;          // A pointer to the pointer

    // Displaying the values
    printf("Value of num: %d\n", num);                  // Direct access
    printf("Value of num using ptr1: %d\n", *ptr1);     // Access using ptr1
    printf("Value of num using ptr2: %d\n", **ptr2);    // Access using ptr2

    // Displaying the addresses
    printf("\nAddress of num: %p\n", (void*)&num);      // Address of num
    printf("Address stored in ptr1: %p\n", (void*)ptr1);  // Address in ptr1
    printf("Address of ptr1: %p\n", (void*)&ptr1);      // Address of ptr1
    printf("Address stored in ptr2: %p\n", (void*)ptr2);  // Address in ptr2
    printf("Address of ptr2: %p\n", (void*)&ptr2);      // Address of ptr2

    return 0;
}
