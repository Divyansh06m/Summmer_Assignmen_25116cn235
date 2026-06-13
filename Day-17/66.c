//program to Union of arrays
#include<stdio.h>
int main()
{
    int a[100],b[100],c[200],i,j,n,m,k=0,flag;
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
        c[k++]=a[i];
    for(j=0;j<m;j++)
    {
        flag=0;
        for(i=0;i<n;i++)
        {
            if(b[j]==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            c[k++]=b[j];
    }
    printf("Union of arrays is:");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
    return 0;
}