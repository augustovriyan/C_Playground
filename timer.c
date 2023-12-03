#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for exit()
#include <unistd.h>

// Function to start countdown timer
void startCountdown(int seconds) {
    while (seconds > 0) {
        int mins = seconds / 60;
        int secs = seconds % 60;
        printf("\rTime Remaining: %02d:%02d", mins, secs);
        fflush(stdout);
        sleep(1);
        seconds--;
    }
    printf("\rTime's up!\n");
}

int getPositiveInteger() {
    int value;
    while (1) {
        printf("Enter the timer duration in seconds (positive integer): ");
        if (scanf("%d", &value) == 1 && value > 0) {
            return value;
        } else {
            // Clear the input buffer
            while (getchar() != '\n');
            printf("Invalid input. Please enter a positive integer.\n");
        }
    }
}

int main() {
    // Get user input for timer duration with validation
    int timerDuration = getPositiveInteger();

    // Provide initial information
    printf("\nStarting countdown timer for %d seconds...\n", timerDuration);

    // Start countdown timer based on user input
    startCountdown(timerDuration);

    return 0;
}
