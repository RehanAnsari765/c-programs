#include <stdio.h>

void main () {

    int c, f;

    printf ("Enter Celsius : ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit: %d\n", f);
}