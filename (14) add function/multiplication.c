#include <stdio.h>

int mul(int a, int b) {

    return a * b;

}

void main () {

    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    int result = mul(a, b);
    printf("Total : %d", result);
}
