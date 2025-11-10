#include <stdio.h>

int main() {
    int N, i;
    double sum = 0, average;

    // --- Input the size of the array ---
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; // Array of size N

    // --- Input elements ---
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add element to sum
    }

    // --- Calculate average ---
    average = sum / N;

    // --- Display results ---
    printf("\nSum of all elements = %.2lf\n", sum);
    printf("Average of the elements = %.2lf\n", average);

    return 0;
}

