#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    printf("Enter fahrenheit: ");
    float fahrenheit;
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("Celsius: %.1f\n", celsius);
    
    return 0;
}