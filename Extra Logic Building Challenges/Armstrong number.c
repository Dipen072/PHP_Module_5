#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count the number of digits
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    sum = 0;

    // Calculate sum of digits raised to power n
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}

