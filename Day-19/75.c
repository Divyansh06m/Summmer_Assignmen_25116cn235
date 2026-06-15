//program to Transpose matrix
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,m,n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            b[j][i] = a[i][j];
    printf("Transpose of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}