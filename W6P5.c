// Write a program to find the number of vowels and consonants in a sentence?

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0;
    
    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Loop through each character in the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]); // Convert to lowercase for case-insensitive comparison
        
        // Check if the character is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    // Display the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}
