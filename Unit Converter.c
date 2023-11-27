#include <stdio.h>

// Function prototypes
void printMenu();
double convertLength(double value, int choice);
void clearInputBuffer();

int main() {
    double value;
    int choice, decimalPlaces;

    printf("Unit Converter - Length\n");

    while (1) {
        printMenu();

        printf("Enter your choice (1-8, or 0 to exit): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break; // Exit the program if the user chooses 0.
        }

        printf("Enter the value: ");
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            clearInputBuffer();
            continue;
        }

        printf("Enter the number of decimal places for the result: ");
        if (scanf("%d", &decimalPlaces) != 1) {
            printf("Invalid input. Using default decimal places.\n");
            decimalPlaces = 2; // Default decimal places
            clearInputBuffer();
        }

        double result = convertLength(value, choice);
        if (result != -1) {
            const char* unit = (choice % 2 == 1) ? "centimeters" : "meters";
            printf("%.*lf %s = %.*lf %s\n", decimalPlaces, value, unit, decimalPlaces, result, unit);
        } else {
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
    printf("7. Kilometers to Miles\n");
    printf("8. Miles to Kilometers\n");
}

double convertLength(double value, int choice) {
    switch (choice) {
        case 1:
            return value / 100.0;
        case 2:
            return value * 100.0;
        case 3:
            return value / 2.54;
        case 4:
            return value * 2.54;
        case 5:
            return value * 3.281;
        case 6:
            return value / 3.281;
        case 7:
            return value * 0.621371; // Convert kilometers to miles
        case 8:
            return value / 0.621371; // Convert miles to kilometers
        default:
            return -1; // Invalid choice
    }
}

void clearInputBuffer() {
    while (getchar() != '\n');
}
