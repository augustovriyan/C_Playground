#include <stdio.h>

// Function prototypes
void printMenu();
double convertCentimetersToMeters(double centimeters);
double convertMetersToCentimeters(double meters);
double convertCentimetersToInches(double centimeters);
double convertInchesToCentimeters(double inches);
double convertMetersToFeet(double meters);
double convertFeetToMeters(double feet);

int main() {
    double value;
    int choice;

    printf("Unit Converter - Length\n");

    while (1) {
        printMenu();

        printf("Enter your choice (1-6, or 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // Exit the program if the user chooses 0.
        }

        printf("Enter the value: ");
        scanf("%lf", &value);

        switch (choice) {
            case 1:
                printf("%.2lf centimeters = %.2lf meters\n", value, convertCentimetersToMeters(value));
                break;
            case 2:
                printf("%.2lf meters = %.2lf centimeters\n", value, convertMetersToCentimeters(value));
                break;
            case 3:
                printf("%.2lf centimeters = %.2lf inches\n", value, convertCentimetersToInches(value));
                break;
            case 4:
                printf("%.2lf inches = %.2lf centimeters\n", value, convertInchesToCentimeters(value));
                break;
            case 5:
                printf("%.2lf meters = %.2lf feet\n", value, convertMetersToFeet(value));
                break;
            case 6:
                printf("%.2lf feet = %.2lf meters\n", value, convertFeetToMeters(value));
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

void printMenu() {
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Inches to Centimeters\n");
    printf("5. Meters to Feet\n");
    printf("6. Feet to Meters\n");
}

double convertCentimetersToMeters(double centimeters) {
    return centimeters / 100.0;
}

double convertMetersToCentimeters(double meters) {
    return meters * 100.0;
}

double convertCentimetersToInches(double centimeters) {
    return centimeters / 2.54;
}

double convertInchesToCentimeters(double inches) {
    return inches * 2.54;
}

double convertMetersToFeet(double meters) {
    return meters * 3.281;
}

double convertFeetToMeters(double feet) {
    return feet / 3.281;
}
