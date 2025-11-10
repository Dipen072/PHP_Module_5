#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read string including spaces

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);  // Convert to lowercase for simplicity

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Cons

