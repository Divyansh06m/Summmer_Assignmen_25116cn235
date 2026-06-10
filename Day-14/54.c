//program to Frequency of an element
#include<stdio.h>
int main()
{
    int n, i, search, count = 0, arr[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to find frequency: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
        }
    }
    if (count > 0) {
        printf("%d is present %d times in the array.\n", search, count);
    } else {
        printf("%d is not present in the array.\n", search);
    }
    return 0;
}