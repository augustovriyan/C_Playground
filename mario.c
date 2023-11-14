#include <stdio.h>

void printPyramid(int height) {
    for (int i = 0; i < height; i++) {
        // Print leading spaces
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

        // Print left half of the pyramid
        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        // Print a gap between the halves
        printf("  ");

        // Print right half of the pyramid
        for (int l = 0; l <= i; l++) {
            printf("#");
        }

        // Move to the next line for the next row
        printf("\n");
    }
}

int main() {
    int height;

    // Get user input for the height of the pyramid
    printf("Enter the height of the pyramid (1-8): ");
    scanf("%d", &height);

    // Validate user input
    if (height < 1 || height > 8) {
        printf("Invalid input. Please enter a height between 1 and 8.\n");
        return 1;  // Exit with an error code
    }

    // Build and print the pyramid
    printPyramid(height);

    return 0;  // Exit with success
}
