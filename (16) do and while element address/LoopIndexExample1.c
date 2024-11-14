#include <stdio.h>

void main() {
    int arr[6] = {10, 23, 31, 57};

    for (int i = 0; i <= 3; i++) {
        if (arr[i] % 2 != 0) {
            printf("odd : %d\n", arr[i]);
        }else {
            printf("even : %d\n", arr[i]);
        }
    }
}
