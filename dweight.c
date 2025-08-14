#include <stdio.h>

int main(void) {
    printf("Enter height: ");
    int height;
    scanf("%d", &height);

    printf("Enter length: ");
    int length;
    scanf("%d", &length);
    
    printf("Enter width: ");
    int width;
    scanf("%d", &width);
    
    float volume = height * length * width;
    float weight = volume / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume: %f\n", volume);
    printf("Dimensional weight: %f\n", weight);
}