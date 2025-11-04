/* Write a program to input two numbers and display their sum. */
#include <stdio.h>

int main() {
    double num1, num2;
    double sum;

    printf("==========================================\n");
    printf("        Simple Sum Calculator\n");
    printf("==========================================\n");

    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        fprintf(stderr, "Error: Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        fprintf(stderr, "Error: Invalid input for the second number.\n");
        return 1;
    }

    sum = num1 + num2;

    printf("\n--- Result ---\n");
    printf("The sum of %f and %f is: %f\n", num1, num2, sum);
    printf("----------------\n");

    return 0;
}
