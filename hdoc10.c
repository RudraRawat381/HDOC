// Write a program to input time in seconds and convert it to hours:minutes:seconds format. in c 
#include <stdio.h>

int main() {
    long long totalSeconds;
    long long hours, minutes, seconds;

    printf("==========================================\n");
    printf("   Seconds to H:M:S Format Converter\n");
    printf("==========================================\n");

    printf("Enter the total time in seconds (e.g., 7385): ");

    if (scanf("%lld", &totalSeconds) != 1) {
        fprintf(stderr, "Error: Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (totalSeconds < 0) {
        printf("Time cannot be negative. Please enter a positive value.\n");
        return 1;
    }

    hours = totalSeconds / 3600;

    long long remainingSeconds = totalSeconds % 3600;

    minutes = remainingSeconds / 60;

    seconds = remainingSeconds % 60;

    printf("\n--- Conversion Result ---\n");
    printf("Total seconds entered: %lld\n", totalSeconds);
    
    printf("Converted Time: %lld:%02lld:%02lld\n", hours, minutes, seconds);
    printf("-------------------------\n");

    return 0;
}
