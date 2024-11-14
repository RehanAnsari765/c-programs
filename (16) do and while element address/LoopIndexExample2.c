#include <stdio.h>

void main() {
    int arr[6] = {500, 98, 99, 100, 600};

    printf("Numbers greater than or equal to 100:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] >= 100) {
            printf("%d\n", arr[i]);
        }
    }

    printf("\nNumbers less than 100:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 100) {
            printf("%d\n", arr[i]);
        }
    }
}
