// Create a one dimensional array of characters and store inside it by reading from standard input.

#include <stdio.h>

int main() {
    int i, length;
    
    // Ask the user for the length of the array
    printf("Enter the number of characters you want to store: ");
    scanf("%d", &length);

    // Create a one-dimensional array of characters
    char arr[length];

    // Clear the newline character left in the buffer after entering the length
    getchar(); 

    // Ask the user to enter the characters
    printf("Enter %d characters: ", length);
    for (i = 0; i < length; i++) {
        arr[i] = getchar();  // Read each character from standard input
    }

    // Display the stored characters
    printf("You entered the following characters:\n");
    for (i = 0; i < length; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}