#include <stdio.h>

main() {
    int num = 10;      // Variable declaration
    int *ptr;          // Pointer declaration

    ptr = &num;        // Assign address of num to pointer

    printf("Original value of num: %d\n", num);
    printf("Address of num (stored in ptr): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Modify value of num using pointer
    *ptr = 25;

    printf("\nAfter modifying value using pointer:\n");
    printf("New value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}

