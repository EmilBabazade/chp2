#include <stdio.h>

#define VAT 0.05f

int main(void) {
    printf("Enter USD amount: ");
    float amount;
    scanf("%f", &amount);

    float withVAT = amount + amount * VAT;
    printf("Amount with VAT: %.2f$\n", withVAT);

    return 0;
}