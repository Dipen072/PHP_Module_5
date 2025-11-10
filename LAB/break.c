#include <stdio.h>

int main() {
    int i;

    printf("Using break statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Loop stopped at %d\n", i);
            break; // Exit the loop when i = 5
        }
        printf("%d ", i);
    }

    return 0;
}

