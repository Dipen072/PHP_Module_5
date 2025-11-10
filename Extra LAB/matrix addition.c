#include <stdio.h>

main() 
{
    int i, j;

    // --- 2x2 Matrix Addition ---
    int mat1_2x2[2][2], mat2_2x2[2][2], sum_2x2[2][2];

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1_2x2[i][j]);
        }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2_2x2[i][j]);
        }

    // Addition
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            sum_2x2[i][j] = mat1_2x2[i][j] + mat2_2x2[i][j];

    printf("\nSum of 2x2 matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", sum_2x2[i][j]);
        printf("\n");
    }

    // --- 3x3 Matrix Multiplication ---
    int mat1_3x3[3][3], mat2_3x3[3][3], prod_3x3[3][3] = {0};

    printf("\nEnter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1_3x3[i][j]);
        }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2_3x3[i][j]);
        }

    // Multiplication
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                prod_3x3[i][j] += mat1_3x3[i][k] * mat2_3x3[k][j];

    printf("\nProduct of 3x3 matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", prod_3x3[i][j]);
        printf("\n");
    }

    return 0;
}

