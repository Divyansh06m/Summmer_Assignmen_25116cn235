//program to Find row-wise sum
#include <stdio.h>
int main() {
    int r, c, i, j;
    int matrix[10][10], rowSum[10];

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }

    for (i = 0; i < r; ++i) {
        rowSum[i] = 0;
        for (j = 0; j < c; ++j) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\nRow-wise sum of the matrix:\n");
    for (i = 0; i < r; ++i) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}