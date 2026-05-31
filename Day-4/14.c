#include <stdio.h>
unsigned long long get_fibonacci_recursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    return get_fibonacci_recursive(n - 1) + get_fibonacci_recursive(n - 2);
}

int main() {
    int n;
    printf("Enter the position (n): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci term %d is: %llu\n", n, get_fibonacci_recursive(n));
    return 0;
}