#include <stdio.h>

int main() {
    int i; // Variable declaration

    // --- Using while loop ---
    printf("Numbers from 1 to 10 using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    // --- Using for loop ---
    printf("\n\nNumbers from 1 to 10 using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // --- Using do-while loop ---
    printf("\n\nNumbers from 1 to 10 using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\n"); // For better output formatting
    return 0;
}

