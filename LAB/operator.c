#include <stdio.h>

main() 
{
    int a, b; // Variable declarations

    // --- Input Section ---
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // --- Arithmetic Operations ---
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Division (a / b): %d\n", a / b);     // Integer division
    printf("Modulus (a %% b): %d\n", a % b);     // Remainder

    // --- Relational Operations ---
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // --- Logical Operations ---
    printf("\n--- Logical Operations ---\n");
    printf("(a && b): %d\n", (a && b));  // True if both non-zero
    printf("(a || b): %d\n", (a || b));  // True if any one is non-zero
    printf("!(a && b): %d\n", !(a && b)); // Negation

    // --- End of program ---
    return 0;
}

