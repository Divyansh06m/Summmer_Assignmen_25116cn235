//program to recursive fibonacci
#include <stdio.h>
long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Positive number nhi samajh aata kya.\n");
        return 1;
    }

    long long result = fibonacci(num);
    printf("Fibonacci of %d is: %lld\n", num, result);

    return 0;
}