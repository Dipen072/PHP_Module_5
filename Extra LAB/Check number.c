#include <stdio.h>

int main() {
    int num;

    // --- Input from user ---
    printf("Enter an integer: ");
    scanf("%d", &num);

    // --- Check even or odd ---
    if (num % 2 == 0) {
        printf("%d is EVEN.\n", num);
    } else {
        printf("%d is ODD.\n", num);
    }

    // --- Check positive, negative, or zero ---
    if (num > 0) {
        printf("%d is POSITIVE.\n", num);
    } else if (num < 0) {
        printf("%d is NEGATIVE.\n", num);
    } else {
        printf("The number is ZERO.\n");
    }

    // --- Check multiple of 3 and 5 ---
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else {
        printf("%d is NOT a multiple of both 3 and 5.\n", num);
    }

    return 0;
}

