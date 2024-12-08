// Write a program that demostrate the use of various input statements like getchar(), getch(), scanf().

#include <stdio.h>
#include <conio.h>  // Required for getch()

int main() {
    char ch1, ch2;
    int number;

    // Using getchar()
    printf("Enter a character using getchar(): ");
    ch1 = getchar();
    printf("You entered (getchar()): %c\n", ch1);

    // Using getch()
    printf("Press any key using getch(): ");
    ch2 = getch();
    printf("\nYou entered (getch()): %c\n", ch2);

    // Using scanf()
    printf("Enter a number using scanf(): ");
    scanf("%d", &number);
    printf("You entered (scanf()): %d\n", number);

    return 0;
}