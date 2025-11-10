#include <stdio.h>
#include <time.h>

// --- Recursive function to generate Fibonacci ---
int fibonacci_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// --- Iterative function to calculate Nth Fibonacci ---
int fibonacci_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N, i;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &N);

    printf("\nFibonacci sequence up to %d terms (recursive):\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    // --- Calculate Nth Fibonacci number ---
    int nth;
    
    clock_t start_rec = clock();
    nth = fibonacci_recursive(N - 1);
    clock_t end_rec = clock();
    double time_rec = (double)(end_rec - start_rec) / CLOCKS_PER_SEC;

    clock_t start_iter = clock();
    int nth_iter = fibonacci_iterative(N - 1);
    clock_t end_iter = clock();
    double time_iter = (double)(end_iter - start_iter) / CLOCKS_PER_SEC;

    printf("\nNth Fibonacci number (recursive) = %d\n", nth);
    printf("Time taken (recursive) = %.6f seconds\n", time_rec);

    printf("Nth Fibonacci number (iterative) = %d\n", nth_iter);
    printf("Time taken (iterative) = %.6f seconds\n", time_iter);

    return 0;
}

