#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Added a space before %c to consume any leading whitespace

    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Invalid operator. Please enter +, -, *, or /.\n");
        return 1; // Return an error code
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) { // Check if both numbers were successfully scanned
        printf("Invalid input. Please enter two valid numbers.\n");
        return 1; // Return an error code
    }

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
