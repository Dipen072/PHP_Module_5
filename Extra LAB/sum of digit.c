#include <stdio.h>

main() {
    int num, temp, sum = 0, reverse = 0, digit;

    // --- Input number from user ---
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num; // Store original number for processing

    // --- Calculate sum of digits ---
    while (temp != 0) {
        digit = temp % 10;   // Extract last digit
        sum += digit;        // Add to sum
        temp /= 10;          // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    // --- Reverse the number ---
    temp = num; // Reset temp to original number
    while (temp != 0) {
        digit = temp % 10;      // Extract last digit
        reverse = reverse * 10 + digit; // Append digit to reverse
        temp /= 10;             // Remove last digit
    }

    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}

