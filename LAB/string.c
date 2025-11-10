#include <stdio.h>
#include <string.h> // Required for strcat() and strlen()

main() {
    char str1[100], str2[100]; // Arrays to store strings

    // --- Input from user ---
    printf("Enter first string: ");
    gets(str1); // Reads first string (can use fgets instead)
    printf("Enter second string: ");
    gets(str2); // Reads second string

    // --- Concatenate strings ---
    strcat(str1, str2); // Append str2 to str1

    // --- Display result ---
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}

