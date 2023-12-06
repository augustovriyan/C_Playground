#include <stdio.h>
#include <stdlib.h>

void printSpaces(int count) {
    for (int i = 0; i < count; i++) {
        printf(" ");
    }
}

void printBlocks(int count) {
    for (int i = 0; i < count; i++) {
        printf("#");
    }
}

void printPyramidRow(int height, int row) {
    // Print leading spaces
    printSpaces(height - row - 1);

    // Print left half of the pyramid
    printBlocks(row + 1);

    // Print a gap between the halves
    printf("  ");

    // Print right half of the pyramid
    printBlocks(row + 1);

    // Move to the next line for the next row
    printf("\n");
}

void printPyramid(int height) {
    for (int i = 0; i < height; i++) {
        printPyramidRow(height, i);
    }
}

int main() {
    int height;

    // Get user input for the height of the pyramid
    printf("Enter the height of the pyramid (1-8): ");
    
    // Validate user input
    if (scanf("%d", &height) != 1 || height < 1 || height > 8) {
        printf("Invalid input. Please enter a height between 1 and 8.\n");
        return EXIT_FAILURE;
    }

    // Build and print the pyramid
    printPyramid(height);

    return EXIT_SUCCESS;
}
