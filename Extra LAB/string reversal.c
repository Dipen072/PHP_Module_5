#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read string with spaces

    reverseString(str);

    printf("Reversed string: %s\n", str);
    return 0;
}

