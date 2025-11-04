//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    float x, y, temp;

    printf("Enter the first number: ");
    if (scanf("%f", &x) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%f", &y) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = x;
    x = y;
    y = temp;

    printf("After swapping:\n");
    printf("First number: %f\n", x);
    printf("Second number: %f\n", y);

    return 0;
}
