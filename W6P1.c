// Write a program to find the number of occurrences of a word in a sentence?

#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE 1000
#define MAX_WORD 50

int countOccurrences(char *sentence, char *word) {
    int count = 0;
    char *pos = sentence;

    // Search for the word in the sentence
    while ((pos = strstr(pos, word)) != NULL) {
        // Ensure the match is a complete word
        if ((pos == sentence || *(pos - 1) == ' ') &&
            (*(pos + strlen(word)) == '\0' || *(pos + strlen(word)) == ' ')) {
            count++;
        }
        pos += strlen(word); // Move the pointer forward
    }
    return count;
}

int main() {
    char sentence[MAX_SENTENCE];
    char word[MAX_WORD];
    int occurrences;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, MAX_SENTENCE, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove trailing newline

    // Input the word
    printf("Enter the word to search for: ");
    scanf("%s", word);

    // Count occurrences
    occurrences = countOccurrences(sentence, word);

    // Display the result
    printf("The word '%s' occurs %d time(s) in the sentence.\n", word, occurrences);

    return 0;
}
