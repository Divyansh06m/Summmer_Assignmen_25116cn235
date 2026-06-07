//to check prime
#include <stdio.h>
int main() {
    int num, i, xtra = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.", num);
        return 0;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            xtra = 1;
            break;
        }
    }
    if (xtra == 0)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    return 0;
}