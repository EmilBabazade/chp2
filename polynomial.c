#include <stdio.h>

int main(void) {
    printf("Enter value for x: ");
    float x;
    scanf("%f", &x);

    // ((((3x + 2)x – 5)x – 1)x + 7)x – 6
    float polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result: %f", polynomial);
    return 0;
}