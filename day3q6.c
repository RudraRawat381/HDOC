//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    float a, b, temp;

    printf("Enter the first number: ");
    if (scanf("%f", &a) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%f", &b) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("First number: %f\n", a);
    printf("Second number: %f\n", b);

    return 0;
}
