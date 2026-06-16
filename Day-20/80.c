//program to Find column-wise sum
#include <stdio.h>
int main() {
    int r, c, i, j;
    int matrix[10][10], colSum[10];

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }

    for (j = 0; j < c; ++j) {
        colSum[j] = 0;
        for (i = 0; i < r; ++i) {
            colSum[j] += matrix[i][j];
        }
    }

    printf("\nColumn-wise sum of the matrix:\n");
    for (j = 0; j < c; ++j) {
        printf("Sum of column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}