#include <stdio.h>

// Function prototypes
void printMenu();
double convertLength(double value, int choice);
void clearInputBuffer();
void getUserInput(double* value, int* choice, int* decimalPlaces);
void printResult(double value, double result, int choice, int decimalPlaces);
void displayGoodbyeMessage();

int main() {
    double value;
    int choice, decimalPlaces;

    printf("Unit Converter - Length\n");

    while (1) {
        printMenu();

        getUserInput(&value, &choice, &decimalPlaces);

        if (choice == 0) {
            displayGoodbyeMessage();
            break; // Exit the program if the user chooses 0.
        }

        double result = convertLength(value, choice);
        if (result != -1) {
            printResult(value, result, choice, decimalPlaces);
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

void getUserInput(double* value, int* choice, int* decimalPlaces) {
    printf("Enter your choice (1-8, or 0 to exit): ");
    if (scanf("%d", choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        clearInputBuffer();
        return;
    }

    if (*choice == 0) {
        return; // No need to ask for further input if the user chooses to exit.
    }

    printf("Enter the value: ");
    if (scanf("%lf", value) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        clearInputBuffer();
        return;
    }

    printf("Enter the number of decimal places for the result: ");
    if (scanf("%d", decimalPlaces) != 1) {
        printf("Invalid input. Using default decimal places.\n");
        *decimalPlaces = 2; // Default decimal places
        clearInputBuffer();
    }
}

void printResult(double value, double result, int choice, int decimalPlaces) {
    const char* unit = (choice % 2 == 1) ? "centimeters" : "meters";
    printf("%.*lf %s = %.*lf %s\n", decimalPlaces, value, unit, decimalPlaces, result, unit);
}

void clearInputBuffer() {
    while (getchar() != '\n');
}

void displayGoodbyeMessage() {
    printf("Exiting the program. Goodbye!\n");
}
