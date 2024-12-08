// Write a program to demostrate the overflow and underflow of various datatypes and their resolution.

#include <stdio.h>
#include <limits.h>  // For integer limits
#include <float.h>   // For float/double limits

int main() {
    // Integer overflow and underflow
    int int_max = INT_MAX;
    int int_min = INT_MIN;

    printf("Integer overflow:\n");
    printf("Original int max value: %d\n", int_max);
    int_max += 1;  // This causes overflow
    printf("After overflow, int max + 1: %d\n\n", int_max);

    printf("Integer underflow:\n");
    printf("Original int min value: %d\n", int_min);
    int_min -= 1;  // This causes underflow
    printf("After underflow, int min - 1: %d\n\n", int_min);

    // Unsigned integer overflow
    unsigned int uint_max = UINT_MAX;

    printf("Unsigned integer overflow:\n");
    printf("Original unsigned int max value: %u\n", uint_max);
    uint_max += 1;  // This causes overflow
    printf("After overflow, unsigned int max + 1: %u\n\n", uint_max);

    // Float overflow and underflow
    float float_max = FLT_MAX;
    float float_min = FLT_MIN;

    printf("Float overflow:\n");
    printf("Original float max value: %e\n", float_max);
    float_max *= 10.0f;  // This causes overflow
    printf("After overflow, float max * 10: %e\n\n", float_max);

    printf("Float underflow:\n");
    printf("Original float min positive value: %e\n", float_min);
    float_min /= 10.0f;  // This causes underflow
    printf("After underflow, float min / 10: %e\n\n", float_min);

    // Double overflow and underflow
    double double_max = DBL_MAX;
    double double_min = DBL_MIN;

    printf("Double overflow:\n");
    printf("Original double max value: %e\n", double_max);
    double_max *= 10.0;  // This causes overflow
    printf("After overflow, double max * 10: %e\n\n", double_max);

    printf("Double underflow:\n");
    printf("Original double min positive value: %e\n", double_min);
    double_min /= 10.0;  // This causes underflow
    printf("After underflow, double min / 10: %e\n\n", double_min);

    return 0;
}