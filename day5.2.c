#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert seconds to hours, minutes, and seconds
    hours = totalSeconds / 3600;            // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;     // remaining seconds

    minutes = totalSeconds / 60;            // 1 minute = 60 seconds
    seconds = totalSeconds % 60;            // remaining seconds

    // Display the result
    printf("\nTime = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
