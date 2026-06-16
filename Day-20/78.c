//program to Check symmetric matrix
#include <stdio.h>
int main() {
    int r, c, i, j, flag = 1;
    int matrix[10][10];

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Matrix is not symmetric as it is not a square matrix.\n");
        return 0;
    }

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }

    if (flag)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}