//function for Armstrong
#include <stdio.h>
int main() {
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (sum == temp) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}