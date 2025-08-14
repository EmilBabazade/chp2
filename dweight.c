#include <stdio.h>

int main(void) {
    int height = 8;
    int length = 12;
    int width = 10;
    float volume = 8 * 12 * 10;
    float weight = volume / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume: %f\n", volume);
    printf("Dimensional weight: %f\n", weight);
}