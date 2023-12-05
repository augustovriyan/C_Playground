#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to set the alarm for a specified number of seconds
void setAlarm(int seconds);

int main() {
    int seconds;

    // Get user input for the number of seconds
    printf("Enter the number of seconds for the alarm: ");

    // Validate input
    if (scanf("%d", &seconds) != 1 || seconds <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of seconds.\n");
        return EXIT_FAILURE;
    }

    // Inform the user about the alarm setting
    printf("Setting the alarm for %d seconds...\n", seconds);

    // Call the function to set the alarm
    setAlarm(seconds);

    // Display the alarm message
    printf("Time's up! Alarm triggered after %d seconds.\n", seconds);

    return EXIT_SUCCESS;
}

void setAlarm(int seconds) {
    // Sleep for the specified number of seconds using usleep for finer granularity
    usleep(seconds * 1000000);
}
