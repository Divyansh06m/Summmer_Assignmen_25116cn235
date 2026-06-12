//program to Find pair with given sum
#include<stdio.h>
int main()
{
    int n, i, j, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);
    printf("The pairs with given sum are: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }
    return 0;
}