// Write a program to generate a sequence of numbers in both ascending and descending order.

#include <stdio.h>

int main() {
    int start, end;

    // Take user input for the start and end of the sequence
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nSequence in Ascending Order:\n");
    // Generate numbers in ascending order
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\n\nSequence in Descending Order:\n");
    // Generate numbers in descending order
    for (int i = end; i >= start; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}