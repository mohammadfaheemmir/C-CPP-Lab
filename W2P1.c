// Write a program to demonstare the precedence of various operators.

#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, result;

    // Demonstrating multiplication (*) has higher precedence over addition (+)
    result = a + b * c;  // Expected: 10 + (5 * 2) = 20
    printf("a + b * c = %d\n", result);

    // Demonstrating parentheses () have the highest precedence
    result = (a + b) * c;  // Expected: (10 + 5) * 2 = 30
    printf("(a + b) * c = %d\n", result);

    // Demonstrating division (/) has higher precedence over subtraction (-)
    result = a - b / c;  // Expected: 10 - (5 / 2) = 8
    printf("a - b / c = %d\n", result);

    // Demonstrating the precedence of assignment (=) being lower than arithmetic operators
    result = a + b - c;  // Expected: 10 + 5 - 2 = 13
    printf("a + b - c = %d\n", result);

    // Demonstrating the precedence of relational operators over logical operators
    int x = 3, y = 5, z = 8;
    int bool_result = (x < y) && (y < z);  // Expected: (3 < 5) && (5 < 8) = 1 (true)
    printf("(x < y) && (y < z) = %d\n", bool_result);

    // Demonstrating the precedence of logical OR (||) over assignment (=)
    bool_result = x > y || y < z;  // Expected: (3 > 5) || (5 < 8) = 1 (true)
    printf("x > y || y < z = %d\n", bool_result);

    // Demonstrating the precedence of increment (++) over assignment (=)
    int d = 3;
    result = d++ + 5;  // Expected: (3) + 5 = 8, then d becomes 4
    printf("d++ + 5 = %d, d = %d\n", result, d);

    // Demonstrating precedence of unary minus (-) over multiplication (*)
    result = -a * b;  // Expected: -(10 * 5) = -50
    printf("-a * b = %d\n", result);

    // Demonstrating precedence of modulus (%) over addition (+)
    result = a % 3 + b;  // Expected: (10 % 3) + 5 = 1 + 5 = 6
    printf("a %% 3 + b = %d\n", result);

    return 0;
}