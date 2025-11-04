//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    printf("Enter the length of the rectangle: ");
    if (scanf("%f", &length) != 1) {
        printf("Invalid input for length.\n");
        return 1;
    }

    printf("Enter the breadth of the rectangle: ");
    if (scanf("%f", &breadth) != 1) {
        printf("Invalid input for breadth.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Results ---\n");
    printf("Length: %f\n", length);
    printf("Breadth: %f\n", breadth);
    printf("Area of the rectangle: %f\n", area);
    printf("Perimeter of the rectangle: %f\n", perimeter);
    printf("----------------\n");

    return 0;
}
