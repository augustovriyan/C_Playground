#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // Include the necessary header for usleep

int main() {
    int seconds;

    // Get user input for the number of seconds
    printf("Enter the number of seconds for the alarm: ");
    scanf("%d", &seconds);

    // Validate user input
    if (seconds <= 0) {
        printf("Invalid input. Please enter a positive number of seconds.\n");
        return EXIT_FAILURE;  // Exit with an error code using EXIT_FAILURE constant
    }

    // Inform the user about the alarm setting
    printf("Setting the alarm for %d seconds...\n", seconds);

    // Sleep for the specified number of seconds using usleep for finer granularity
    usleep(seconds * 1000000);

    // Display the alarm message
    printf("Time's up! Alarm triggered after %d seconds.\n", seconds);

    return EXIT_SUCCESS;  // Exit with success using EXIT_SUCCESS constant
}
