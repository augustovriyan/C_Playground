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

int main() {
    int timerDuration;

    // Get user input for timer duration with validation
    do {
        printf("Enter the timer duration in seconds (positive integer): ");
    } while (scanf("%d", &timerDuration) != 1 || timerDuration <= 0);

    // Provide initial information
    printf("\nStarting countdown timer for %d seconds...\n", timerDuration);

    // Start countdown timer based on user input
    startCountdown(timerDuration);

    return 0;
}
