#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate combination (nCr)
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Pascal's Triangle up to %d rows:\n", n);

    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");

        // Print numbers
        for (int j = 0; j <= i; j++)
            printf("%4llu", combination(i, j));
        
        printf("\n");
    }

    return 0;
}

