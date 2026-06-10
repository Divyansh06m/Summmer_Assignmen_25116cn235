//program to Second largest element
#include<stdio.h>
int main()
{
    int n, i, largest, second_largest, arr[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }
    largest = second_largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == largest) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d.\n", second_largest);
    }
    return 0;
}