// Write a function char* stuff(char* s1,char* s2,int sp, intrp) to stuff string s2 in string sl at position sp, replacing rp number of characters (rp may be zero).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to stuff s2 into s1 at position sp, replacing rp characters
char* stuff(char* s1, char* s2, int sp, int rp) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Ensure sp is within bounds
    if (sp < 0 || sp > len1) {
        printf("Error: Starting position is out of bounds.\n");
        return NULL;
    }

    // Calculate the new length of the resulting string
    int new_len = len1 - rp + len2;
    if (rp > len1 - sp) {
        rp = len1 - sp; // Adjust rp if it exceeds the characters from sp to the end
    }

    // Allocate memory for the new string
    char* result = (char*)malloc((new_len + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // Copy the portion of s1 before sp into result
    strncpy(result, s1, sp);
    result[sp] = '\0';

    // Append s2 to result
    strcat(result, s2);

    // Append the portion of s1 after (sp + rp) to result
    strcat(result, s1 + sp + rp);

    return result;
}

int main() {
    char s1[100] = "Hello, World!";
    char s2[] = "Amazing";

    int sp = 7; // Position to stuff s2 into s1
    int rp = 5; // Number of characters to replace in s1

    char* result = stuff(s1, s2, sp, rp);

    if (result != NULL) {
        printf("Original string: %s\n", s1);
        printf("String to insert: %s\n", s2);
        printf("Modified string: %s\n", result);
        free(result); // Free the allocated memory
    }

    return 0;
}
