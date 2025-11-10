#include <stdio.h>

// --- Structure Definition ---
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

main() 
{
    struct Student students[3]; // Array to store 3 students
    int i;

    // --- Input Details for Each Student ---
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // --- Display Student Details ---
    printf("Student Details:\n");
    printf("---------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
        printf("---------------------------\n");
    }

    return 0;
}

