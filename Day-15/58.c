//program to Rotate array left
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d",&d);
    printf("The rotated array is: ");
    for(int i=d;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<d;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}   