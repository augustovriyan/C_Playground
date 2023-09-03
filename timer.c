#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for exit()
#include <unistd.h>

void start_countdown(int seconds) {
    while (seconds > 0) {
        int mins = seconds / 60;
        int secs = seconds % 60;
        printf("\r%02d:%02d", mins, secs);
        fflush(stdout);
        sleep(1);
        seconds--;
    }
    printf("\rTime's up!\n");
}

int main() {
    int timer_duration;

    printf("Enter the timer duration in seconds: ");
    if (scanf("%d", &timer_duration) != 1 || timer_duration <= 0) {
        printf("Invalid timer duration. Please enter a positive integer.\n");
        return 1; // Return an error code
    }

    start_countdown(timer_duration);

    return 0;
}
