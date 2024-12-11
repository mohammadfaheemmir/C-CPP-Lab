// Write a C function to remove duplicates from an orderd array. For example, if input array contains 10,10,10,30,40,40,50,80,80,100 then the output should be 10,30,40,50,80,100

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0; // Initialize the new length of the array without duplicates

    // Traverse the array
    for (int i = 0; i < n - 1; i++) {
        // If the current element is not equal to the next element, store it
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    // Store the last element as it hasn't been checked
    arr[j++] = arr[n - 1];

    return j; // Return the new length of the array without duplicates
}

int main() {
    int arr[] = {10, 10, 10, 30, 40, 40, 50, 80, 80, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to remove duplicates
    int newLength = removeDuplicates(arr, n);

    // Print the array without duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
