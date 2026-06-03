//program to recursive reverse number
#include <stdio.h>
int reverseNumber(int n) {
    static int rev = 0;
    if (n > 0) {
        rev = rev * 10 + n % 10;
        reverseNumber(n / 10);
    }
    return rev;
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Positive number nhi samajh aata kya.\n");
        return 1;
    }

    int result = reverseNumber(num);
    printf("Reverse of %d is: %d\n", num, result);

    return 0;
}