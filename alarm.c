#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int seconds;

    printf("Enter the number of seconds for the alarm: ");
    scanf("%d", &seconds);

    if (seconds <= 0) {
        printf("Invalid input. Please enter a positive number of seconds.\n");
        return 1;  // Exit with an error code
    }

    printf("Setting the alarm for %d seconds...\n", seconds);

    // Sleep for the specified number of seconds
    sleep(seconds);

    printf("Time's up! Alarm triggered after %d seconds.\n", seconds);

    return 0;  // Exit with success
}
