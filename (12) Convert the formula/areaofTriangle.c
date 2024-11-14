#include <stdio.h>

void main () {

    float area, b, h;

    printf("Enter Base : ");
    scanf("%f", &b);

    printf("Enter Height : ");
    scanf("%f", &h);

    area = 0.5 * b * h;
    printf("%f", area);
}
