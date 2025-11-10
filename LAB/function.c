#include <stdio.h>

// --- Function Declaration ---
int factorial(int n);

int main() {
    int num, result;

    // --- Input from user ---
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // --- Function Call ---
    result = factorial(num);

    // --- Display Result ---
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}

// --- Function Definition ---
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i; // Multiply fact by i in each iteration
    }

    return fact; // Return the computed factorial
}

