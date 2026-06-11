//program to Move zeroes to end
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<n)
    {
        arr[count++]=0;
    }
    printf("The array after moving zeroes to end is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}