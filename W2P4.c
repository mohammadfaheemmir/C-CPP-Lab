// Write a program to reverse the digits of a given number. For example, the number 9876 should be returned as 6789

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Take user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the digits of the number
    while (number != 0) {
        remainder = number % 10;              // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Add it to reversed number
        number /= 10;                          // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}