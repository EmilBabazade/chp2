#include <stdio.h>

int main(void) {
    printf("Enter amount of loan USD: ");
    float loan;
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    float interest;
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    float monthly_payment;
    scanf("%f", &monthly_payment);

    printf("Enter number of months: ");
    int months;
    scanf("%d", &months);

    float monthly_interest = interest / 100 / 12;

    for(int i = 0; i < months; i++) {
        loan += loan * monthly_interest;
        loan -= monthly_payment;
        printf("Balance remaining after %d'th payment: %.2f\n", i + 1, loan);
    }

    return 0;
}