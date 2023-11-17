#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for exit()
#include <unistd.h>

// Function to start countdown timer
void start_countdown(int seconds) {
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
    int timer_duration;

    // Get user input for timer duration with validation
    do {
        printf("Enter the timer duration in seconds (positive integer): ");
    } while (scanf("%d", &timer_duration) != 1 || timer_duration <= 0);

    // Provide initial information
    printf("Starting countdown timer for %d seconds...\n", timer_duration);

    // Start countdown timer based on user input
    start_countdown(timer_duration);

    return 0;
}
