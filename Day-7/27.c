//program to recursive sum of digits
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Positive number nhi samajh aata kya.\n");
        return 1;
    }

    int result = sumOfDigits(num);
    printf("Sum of digits of %d is: %d\n", num, result);

    return 0;
}