#include <stdio.h>

int main() {
    int marks;

    // --- Input from user ---
    printf("Enter marks of the student (0-100): ");
    scanf("%d", &marks);

    // --- Decision making using if-else ---
    if (marks > 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks >= 0 && marks <= 50) {
        printf("Grade: D\n");
    } else {
        printf("Invalid marks entered!\n");
    }

    return 0;
}

