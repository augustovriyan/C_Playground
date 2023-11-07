#include <stdio.h>

// Function prototypes
void printMenu();
double convertLength(double value, int choice);

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

        double result = convertLength(value, choice);
        if (result != -1) {
            printf("%.2lf %s\n", value, choice % 2 == 1 ? "centimeters" : "meters", result);
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
        default:
            return -1; // Invalid choice
    }
}
