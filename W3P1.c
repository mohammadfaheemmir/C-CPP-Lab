// Write a program to convert an amount (upto billion) in figures to equivalent amount in words.

#include <stdio.h>
#include <string.h>

const char *single_digits[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const char *two_digits[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const char *two_digits_with_one[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const char *thousands[] = {"", "Thousand", "Million", "Billion"};

void convert_to_words(int n, char *output) {
    if (n == 0) {
        strcpy(output, "Zero");
        return;
    }

    char result[1000] = "";
    int group = 0;

    while (n > 0) {
        int part = n % 1000;
        if (part != 0) {
            char temp[500] = "";
            int hundred = part / 100;
            int remainder = part % 100;
            if (hundred > 0) {
                strcat(temp, single_digits[hundred]);
                strcat(temp, " Hundred ");
            }
            if (remainder >= 10 && remainder < 20) {
                strcat(temp, two_digits_with_one[remainder - 10]);
            } else {
                int tens = remainder / 10;
                int ones = remainder % 10;
                if (tens > 0) {
                    strcat(temp, two_digits[tens]);
                    strcat(temp, " ");
                }
                if (ones > 0) {
                    strcat(temp, single_digits[ones]);
                }
            }
            if (group > 0) {
                strcat(temp, " ");
                strcat(temp, thousands[group]);
            }
            strcat(result, temp);
            strcat(result, " ");
        }
        n /= 1000;
        group++;
    }

    // Remove trailing spaces
    for (int i = strlen(result) - 1; i >= 0 && result[i] == ' '; i--) {
        result[i] = '\0';
    }

    strcpy(output, result);
}

int main() {
    int amount;
    char words[1000];

    // Take user input for the amount
    printf("Enter an amount: ");
    scanf("%d", &amount);

    // Convert amount to words
    convert_to_words(amount, words);

    // Output the equivalent words
    printf("The amount in words is: %s\n", words);

    return 0;
}
