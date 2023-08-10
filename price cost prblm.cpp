#include <stdio.h>

int main() {
    int numPeople;
    char businessPurpose, seniorCitizen;
    float basePrice, cost;

    printf("Enter the number of people: ");
    scanf("%d", &numPeople);

    printf("Is the customer staying on company business? (Y/N): ");
    scanf(" %c", &businessPurpose);

    printf("Is the customer over 60 years of age? (Y/N): ");
    scanf(" %c", &seniorCitizen);

    if (numPeople == 2) {
        basePrice = 85;
    } else if (numPeople == 3) {
        basePrice = 90;
    } else if (numPeople == 4) {
        basePrice = 95;
    } else {
        basePrice = 95 + (numPeople - 4) * 6;
    }

    if (businessPurpose == 'Y') {
        cost = basePrice * 0.8;
    } else if (seniorCitizen == 'Y') {
        cost = basePrice * 0.85;
    } else {
        cost = basePrice;
    }

    printf("Cost of the room: $%.2f\n", cost);

    return 0;
}