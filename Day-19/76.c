//program to Find diagonal sum
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,primary_sum=0,secondary_sum=0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        primary_sum += a[i][i];
        secondary_sum += a[i][n-1-i];
    }
    printf("Sum of primary diagonal: %d\n",primary_sum);
    printf("Sum of secondary diagonal: %d\n",secondary_sum);
    return 0;
}