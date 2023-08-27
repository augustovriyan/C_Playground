#include <stdio.h>

int main() {
    double value;
    int choice;

    printf("Unit Converter - Length\n");
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Inches to Centimeters\n");
    printf("5. Meters to Feet\n");
    printf("6. Feet to Meters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2lf centimeters = %.2lf meters\n", value, value / 100);
            break;
        case 2:
            printf("%.2lf meters = %.2lf centimeters\n", value, value * 100);
            break;
        case 3:
            printf("%.2lf centimeters = %.2lf inches\n", value, value / 2.54);
            break;
        case 4:
            printf("%.2lf inches = %.2lf centimeters\n", value, value * 2.54);
            break;
        case 5:
            printf("%.2lf meters = %.2lf feet\n", value, value * 3.281);
            break;
        case 6:
            printf("%.2lf feet = %.2lf meters\n", value, value / 3.281);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
