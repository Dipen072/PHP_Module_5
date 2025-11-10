#include <stdio.h>

int main() {
    double num1, num2;  // Numbers can be decimal
    char op;             // Operator

    // --- Input from user ---
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op); // Note the space before %c to ignore whitespace

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // --- Perform Calculation ---
    switch(op) {
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
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("Error: Division by zero in modulus!\n");
            break;
        default:
            printf("Error: Invalid operator '%c' entered!\n", op);
    }

    return 0;
}

