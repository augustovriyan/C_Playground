#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Input height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
