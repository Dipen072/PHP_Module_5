#include <stdio.h>

int main() {
    FILE *file;        // File pointer
    char str[100];     // Buffer to read string from file

    // --- Create and write to file ---
    file = fopen("demo1.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "Hello, this is a sample text written to the file.\n"); // Write string
    fclose(file); // Close the file
    printf("String written to file successfully.\n");

    // --- Open file to read ---
    file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), file) != NULL) { // Read line by line
        printf("%s", str);
    }

    fclose(file); // Close the file
    return 0;
}

