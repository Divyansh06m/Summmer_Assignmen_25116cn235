#include <stdio.h>

int main() {
    long long num, originalNum;
    long long maxPrime = -1;
    long long i;

    printf("Enter a positive integer greater than 1: ");
    if (scanf("%lld", &num) != 1 || num <= 1) {
        printf("Invalid input. Please enter an integer greater than 1.\n");
        return 1;
    }

    originalNum = num;
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }
    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (num > 2) {
        maxPrime = num;
    }

    printf("The largest prime factor of %lld is: %lld\n", originalNum, maxPrime);

    return 0;
}