#include <stdio.h>
#include <unistd.h>

void countdown_timer(int seconds) {
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
    scanf("%d", &timer_duration);

    countdown_timer(timer_duration);

    return 0;
}
