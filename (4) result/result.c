#include <stdio.h>
void main () {

    int a, b, result;

    a = 200;
    b = 200;

    result = a > b;
    printf("a > b: %d\n", result);

    result = a == b;
    printf("a == b: %d\n", result);

    result = a >= b;
    printf("a >= b: %d\n", result);

    result = a != b;
    printf("a != b: %d\n", result);
}
