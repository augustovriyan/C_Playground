#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time = 0, end_time = 0;
    int is_running = 0;
    char input;

    printf("Stopwatch\n");
    printf("Press 's' to start and stop the stopwatch, 'r' to reset, and 'q' to quit.\n");

    while (1) {
        input = getchar();

        switch (input) {
            case 'q':
                // Exit the loop and quit the program
                printf("Goodbye!\n");
                return 0;

            case 's':
                if (!is_running) {
                    // Start the stopwatch
                    is_running = 1;
                    start_time = clock();
                    printf("Stopwatch started.\n");
                } else {
                    // Stop the stopwatch and calculate elapsed time
                    is_running = 0;
                    end_time = clock();
                    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
                    printf("Stopwatch stopped. Elapsed time: %.2f seconds\n", elapsed_time);
                }
                break;

            case 'r':
                // Reset the stopwatch
                is_running = 0;
                printf("Stopwatch reset.\n");
                break;

            default:
                // Handle invalid input
                printf("Invalid input. Please use 's' to start/stop, 'r' to reset, or 'q' to quit.\n");
        }

        // Clear the input buffer
        fflush(stdin);

        // Add a small delay to reduce CPU usage
        // This allows the program to sleep for a short period
        // and reduces the number of iterations in the while loop
        // Adjust the duration based on your preference
        usleep(10000); // Sleep for 10 milliseconds
    }
}
