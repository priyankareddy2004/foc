#include <stdio.h>

int main() {
    int cubicFeet;
    float waterBill;

    printf("Enter the cubic feet of water used: ");
    scanf("%d", &cubicFeet);

    if (cubicFeet <= 1000) {
        waterBill = 15.00;
    } else if (cubicFeet <= 2000) {
        waterBill = 15.00 + (cubicFeet - 1000) * 0.0175;
    } else if (cubicFeet <= 3000) {
        waterBill = 15.00 + 1000 * 0.0175 + (cubicFeet - 2000) * 0.02;
    } else {
        waterBill = 15.00 + 1000 * 0.0175 + 1000 * 0.02 + (cubicFeet - 3000) * 70.00;
    }

    printf("Water bill: $%.2f\n", waterBill);

    return 0;
}






