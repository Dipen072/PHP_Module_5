#include <stdio.h>

int main() {
    int num, month;

    // --- Check Even or Odd ---
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }

    // --- Display Month Name ---
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    printf("Month name: ");
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number! Please enter 1-12.\n");
    }

    return 0;
}

