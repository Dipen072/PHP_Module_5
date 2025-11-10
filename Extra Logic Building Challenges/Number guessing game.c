#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts;

    // Initialize random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Enter the maximum number of attempts allowed: ");
    scanf("%d", &maxAttempts);

    printf("Guess the number between 1 and 100.\n");

    while (attempts < maxAttempts) {
        printf("Attempt %d: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number %d in %d attempt(s).\n", secretNumber, attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }

