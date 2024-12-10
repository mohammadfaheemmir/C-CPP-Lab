// Write a program to find sum of all prime numbers between 100 and 500.

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Divisible by a number other than 1 and itself
        }
    }
    return true;
}

int main() {
    int sum = 0;

    // Loop through numbers between 100 and 500
    for (int i = 100; i <= 500; i++) {
        if (is_prime(i)) {
            sum += i; // Add prime number to sum
        }
    }

    // Output the result
    printf("The sum of all prime numbers between 100 and 500 is: %d\n", sum);

    return 0;
}