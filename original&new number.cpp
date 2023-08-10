#include <stdio.h>

int main() {
    int originalNumber, sum = 0, num, i, digit, remainder, checkDigit;
    char newNumber[6];

    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);

    num = originalNumber;
    for (i = 1; i <= 4; i++) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    remainder = sum % 2;
    checkDigit = 2 - remainder;

    sprintf(newNumber, "%d%d", originalNumber, checkDigit);

    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %s\n", newNumber);

    return 0;
}