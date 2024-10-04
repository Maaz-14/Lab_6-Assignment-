#include <stdio.h>

int main() {
    int pin, attempts = 0, maxAttempts = 3;
    const int correctPin = 1234; 

    while (attempts < maxAttempts) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("PIN is correct. Account is unlocked.\n");
            return 0; 
        } else {
            printf("PIN is incorrect. Try again.\n");
            attempts++;
        }
    }

    printf("Maximum attempts reached. Account is locked.\n");
    return 1; // Exit the program with an error code
    // else it will return (return 0)!!!
}
