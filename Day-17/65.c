//program to Merge arrays
#include<stdio.h>
int main()
{
    int a[100],b[100],c[200],i,j,n,m;
    printf("Enter the size of first array:");
    scanf("%d",&n);
    printf("Enter the elements of first array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of second array:");
    scanf("%d",&m);
    printf("Enter the elements of second array:");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c[i]=a[i];
    for(j=0;j<m;j++)
        c[i+j]=b[j];
    printf("Merged array is:");
    for(i=0;i<n+m;i++)
        printf("%d ",c[i]);
    return 0;
}