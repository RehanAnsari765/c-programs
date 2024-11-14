#include <stdio.h>

void main() {
    int row, col;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter col: ");
    scanf("%d", &col);

    int arr[row][col];

    // Sending values to the array
    for (int m = 0; m < row; m++) {
        for (int n = 0; n < col; n++) {
            printf("Enter Value [%d][%d]: ", m, n);
            scanf("%d", &arr[m][n]);
        }
        printf("\n");
    }

    // Print
    printf("Array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
