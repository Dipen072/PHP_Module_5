#include <stdio.h>

main() 
{
    // --- Constant Declaration ---
    const float PI = 3.14159;  // Constant value for Pi

    // --- Variable Declarations ---
    int age = 25;              // Integer variable
    char grade = 'A';          // Character variable
    float height = 5.9;        // Floating-point variable

    // --- Display the values ---
    printf("----- Displaying Variable and Constant Values -----\n");
    printf("Age (int): %d\n", age);
    printf("Grade (char): %c\n", grade);
    printf("Height (float): %.2f\n", height);
    printf("Constant PI (float): %.5f\n", PI);

    // --- End of program ---
    return 0;
}

