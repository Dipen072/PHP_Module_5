#include <stdio.h>

main() 
{
    // -------- 1D Array Section --------
    int arr[5];
    int i;

    printf("Enter 5 integers for 1D array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n1D Array Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // -------- 2D Array Section --------
    int matrix[3][3];
    int row, col, sum = 0;

    printf("\n\nEnter elements for a 3x3 matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("Element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("\n3x3 Matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
            sum += matrix[row][col]; // Add to total sum
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix = %d\n", sum);

    return 0;
}

