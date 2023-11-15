#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight in kilograms with validation
    do {
        printf("Enter your weight in kilograms: ");
    } while (scanf("%f", &weight) != 1 || weight <= 0);

    // Input height in meters with validation
    do {
        printf("Enter your height in meters: ");
    } while (scanf("%f", &height) != 1 || height <= 0);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
