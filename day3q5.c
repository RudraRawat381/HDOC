//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("Invalid input for temperature.\n");
        return 1;
    }

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\n--- Results ---\n");
    printf("Temperature in Celsius: %f\n", celsius);
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
    printf("----------------\n");

    return 0;
}
