// Write a program which will arrange the positive and negative numbers in a one-dimensional array in such a way that all positive numbers should come first and then all the negative numbers will come without changing original sequence of the numbers. Example: Original array contains: 10-15,1,3,-2,0,-2,-3,2,-9 Modified array: 10,1,3,0,2-15,-2,-2,-3,-9

#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int temp[n];
    int posIndex = 0, negIndex;

    // First, add all positive numbers and zero to temp array
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[posIndex++] = arr[i];
        }
    }

    // Set the starting index for negatives
    negIndex = posIndex;

    // Then, add all negative numbers to temp array after positives
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[negIndex++] = arr[i];
        }
    }

    // Copy the temp array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {10, -15, 1, 3, -2, 0, -2, -3, 2, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rearrange the array
    rearrangeArray(arr, n);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
