#include <stdio.h>

void main () {

    int i, num;
        printf("Enter table number : ");
        scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i * num);
    }
}
