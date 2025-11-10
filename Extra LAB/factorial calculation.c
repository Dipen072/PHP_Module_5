#include <stdio.h>
#include <time.h>

// --- Recursive factorial function ---
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// --- Iterative factorial function ---
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;

    // --- Input from user ---
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // --- Recursive factorial ---
    clock_t start_rec = clock();
    unsigned long long fact_rec = factorial_recursive(num);
    clock_t end_rec = clock();
    double time_rec = (double)(end_rec - start_rec) / CLOCKS_PER_SEC;

    // --- Iterative factorial ---
    clock_t start_iter = clock();
    unsigned long long fact_iter = factorial_iterative(num);
    clock_t end_iter = clock();
    double time_iter = (double)(end_iter - start_iter) / CLOCKS_PER_SEC;

    // --- Display results ---
    printf("\nFactorial of %d (recursive) = %llu\n", num, fact_rec);
    printf("Time taken (recursive) = %.6f seconds\n", time_rec);

    printf("Factorial of %d (iterative) = %llu\n", num, fact_iter);
    printf("Time taken (iterative) = %.6f seconds\n", time_iter);

    return 0;
}

