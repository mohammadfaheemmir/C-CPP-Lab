// Write a program to inout 20 arbitary numbers in one dimentional array. Calculate Frequency of each number. Print the number and its frquency in tabular form.

#include <stdio.h>

int main() {
    int arr[20];
    int frequency[20];
    int i, j, count;

    // Input 20 numbers
    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        frequency[i] = -1;  // Initialize frequency array to -1
    }

    // Calculate the frequency of each number
    for (i = 0; i < 20; i++) {
        count = 1;
        for (j = i + 1; j < 20; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0; // Mark this element as counted
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    // Print numbers and their frequencies in tabular form
    printf("\nNumber\tFrequency\n");
    printf("-----------------\n");
    for (i = 0; i < 20; i++) {
        if (frequency[i] != 0) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}
