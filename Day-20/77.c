//program to Multiply matrices
#include <stdio.h>
int main(){
    int r1, c1, r2, c2, i, j, k;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    while (c1 != r2) {
        printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }

    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) {
            multiply[i][j] = 0;
        }

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k) {
                multiply[i][j] += first[i][k] * second[k][j];
            }

    printf("\nResultant matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;

}