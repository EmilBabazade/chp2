#include <stdio.h>

int main(void) {
    printf("Enter value for x: ");
    float x;
    scanf("%f", &x);

    float polynomial = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("Result: %f", polynomial);

    return 0;
}