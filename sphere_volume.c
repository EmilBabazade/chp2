#include <stdio.h>

#define PI 3.14159265358979323846f

int main(void) {
    printf("Enter radious of the sphere: ");
    float radius;
    scanf("%f", &radius);
    float volume = 4.0 / 3.0 * PI * radius * radius * radius;
    printf("Volume of sphere is %.3fm^3", volume); 
    return 0;
}