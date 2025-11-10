#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // --- Input from user ---
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers <= 1 are not prime
    } else {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
    }

    // --- Display result ---
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is NOT a prime number.\n", num);

    return 0;
}

