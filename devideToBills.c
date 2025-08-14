#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Enter USD amount: ");
    float money;
    scanf("%f", &money);

    int bills20 = money / 20;
    money = fmod(money, 20);
    int bills10 = money / 10;
    money = fmod(money, 10);
    int bills5 = money / 5;
    money = fmod(money, 5);
    int bills1 = money;
    int cents = roundf((money - bills1) * 100);

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);
    printf("$cents: %d\n", cents);

    return 0;
}