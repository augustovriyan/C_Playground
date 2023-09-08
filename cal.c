#include <stdio.h>

char getOperator() {
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Added a space before %c to consume any leading whitespace
    return operator;
}

double getNumber() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    return number;
}

int main() {
    char operator;
    double num1, num2;

    operator = getOperator();
    
    while (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Invalid operator. Please enter +, -, *, or /: ");
        operator = getOperator();
    }

    num1 = getNumber();
    num2 = getNumber();

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
