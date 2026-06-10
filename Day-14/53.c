//program to Linear search
#include<stdio.h>
int main()
{
    int n, i, search, arr[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at index %d.\n", search, i);
            return 0;
        }
    }
    printf("%d is not present in array.\n", search);
    return 0;
}