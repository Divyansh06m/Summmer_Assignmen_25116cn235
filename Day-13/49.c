//program to Input and display array
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}