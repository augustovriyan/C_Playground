#include <stdio.h>
#include <stdbool.h>

#define BMI_PRECISION 2

// Function to get valid input for weight
float getValidWeight() {
    float weight;
    do {
        printf("Enter your weight in kilograms: ");
        if (scanf("%f", &weight) != 1 || weight <= 0) {
            printf("Invalid input. Please enter a valid weight greater than 0.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    } while (weight <= 0);
    return weight;
}

// Function to get valid input for height
float getValidHeight() {
    float height;
    do {
        printf("Enter your height in meters: ");
        if (scanf("%f", &height) != 1 || height <= 0) {
            printf("Invalid input. Please enter a valid height greater than 0.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    } while (height <= 0);
    return height;
}

int main() {
    float weight, height, bmi;

    // Input weight and height with validation
    weight = getValidWeight();
    height = getValidHeight();

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI with specified precision
    printf("Your BMI is: %.*f\n", BMI_PRECISION, bmi);

    return 0;
}
