//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;
    int i;

    printf("Enter the principal amount: ");
    if (scanf("%f", &principal) != 1) {
        printf("Invalid input for principal.\n");
        return 1;
    }

    printf("Enter the annual interest rate (in percentage): ");
    if (scanf("%f", &rate) != 1) {
        printf("Invalid input for rate.\n");
        return 1;
    }

    printf("Enter the time (in years): ");
    if (scanf("%f", &time) != 1) {
        printf("Invalid input for time.\n");
        return 1;
    }

    simple_interest = (principal * rate * time) / 100;

    amount = principal;
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100);
    }
    compound_interest = amount - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest: %f\n", simple_interest);
    printf("Compound Interest: %f\n", compound_interest);
    printf("----------------\n");

    return 0;
}
