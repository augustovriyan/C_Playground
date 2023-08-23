#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time, end_time;
    int is_running = 0;
    char input;

    printf("Stopwatch\n");
    printf("Press 's' to start and stop the stopwatch, 'r' to reset, and 'q' to quit.\n");

    while (1) {
        input = getchar();

        if (input == 'q') {
            break;
        } else if (input == 's') {
            if (!is_running) {
                is_running = 1;
                start_time = time(NULL);
                printf("Stopwatch started.\n");
            } else {
                is_running = 0;
                end_time = time(NULL);
                printf("Stopwatch stopped. Elapsed time: %ld seconds\n", end_time - start_time);
            }
        } else if (input == 'r') {
            is_running = 0;
            printf("Stopwatch reset.\n");
        }
        
        // Clear the input buffer
        while ((input = getchar()) != '\n' && input != EOF);
    }

    printf("Goodbye!\n");
    return 0;
}
