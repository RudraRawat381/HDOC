//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

#define PI 3.1415926

int main() {
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1) {
        printf("Invalid input for radius.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\n--- Results ---\n");
    printf("Radius: %f\n", radius);
    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);
    printf("----------------\n");

    return 0;
}
