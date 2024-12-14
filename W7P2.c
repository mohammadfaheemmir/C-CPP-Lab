// Write a program to demonstrate the array indexing using pointers.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array of integers
    int *ptr = arr;  // Pointer to the first element of the array

    // Accessing and printing array elements using pointers
    printf("Array elements using pointer indexing:\n");
    
    // Accessing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // ptr + i is pointer arithmetic
    }
    
    // Accessing array elements directly through the pointer (similar to array indexing)
    printf("\nArray elements using direct pointer indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, ptr[i]);  // ptr[i] is equivalent to *(ptr + i)
    }

    return 0;
}
