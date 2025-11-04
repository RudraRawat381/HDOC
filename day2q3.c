//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    double length, breadth;
    double area, perimeter;

    printf("==========================================\n");
    printf("        Rectangle Calculator\n");
    printf("==========================================\n");

    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1) {
        fprintf(stderr, "Error: Invalid input for length.\n");
        return 1;
    }

    printf("Enter the breadth of the rectangle: ");
    if (scanf("%f", &breadth) != 1) {
        fprintf(stderr, "Error: Invalid input for breadth.\n");
        return 1;
    }

    // Calculate area (Length * Breadth)
    area = length * breadth;

    // Calculate perimeter (2 * (Length + Breadth))
    perimeter = 2 * (length + breadth);
    
    printf("\n--- Results ---\n");
    printf("Length: %f\n", length);
    printf("Breadth: %f\n", breadth);
    printf("Area of the rectangle: %f\n", area);
    printf("Perimeter of the rectangle: %f\n", perimeter);
    printf("----------------\n");

    return 0;
}
