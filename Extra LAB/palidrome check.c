#include <stdio.h>

// --- Function to check palindrome ---
int isPalindromeNumber(int num) {
    int original = num, reverse = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindromeNumber(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is NOT a palindrome.\n", num);

    return 0;
}

