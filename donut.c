#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 40

void clear_screen() {
    printf("\033[H\033[J"); // ANSI escape code to clear the screen
}

int main() {
    clear_screen();

    float A = 0.0;
    float B = 0.0;

    while (1) {
        char output[HEIGHT][WIDTH+1];

        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                float x = j - WIDTH / 2.0;
                float y = i - HEIGHT / 2.0;
                float d1 = 0.5 * sin(A);
                float d2 = 0.5 * cos(B);
                float z = x * x + y * y;
                int intensity = (int)(8 * ((d1 / sqrt(z + d2 * d2)) + 1));
                output[i][j] = ".,-~:;=!*#$@"[intensity];
            }
            output[i][WIDTH] = '\0';
        }

        printf("\033[H"); // Move cursor to home position
        for (int i = 0; i < HEIGHT; i++) {
            printf("%s\n", output[i]);
        }

        A += 0.04;
        B += 0.1;

        usleep(100000); // Sleep for 100ms
    }

    return 0;
}
