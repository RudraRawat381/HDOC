/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    printf("==========================================\n");
    printf("        Arithmetic Calculator\n");
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
    difference = num1 - num2;
    product = num1 * num2;
    
    printf("\n--- Results ---\n");
    printf("Sum (%f + %f)      : %f\n", num1, num2, sum);
    printf("Difference (%f - %f): %f\n", num1, num2, difference);
    printf("Product (%f * %f)   : %f\n", num1, num2, product);
    
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient (%f / %f)  : %f\n", num1, num2, quotient);
    } else {
        printf("Quotient (%f / %f)  : Division by Zero Error\n", num1, num2);
    }
    
    printf("----------------\n");

    return 0;
}


