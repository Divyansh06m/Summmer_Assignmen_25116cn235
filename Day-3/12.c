#include <stdio.h>
int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int absoluteNum1 = (num1 < 0) ? -num1 : num1;
    int absoluteNum2 = (num2 < 0) ? -num2 : num2;

    int gcd = findGCD(absoluteNum1, absoluteNum2);
    int lcm = (absoluteNum1 / gcd) * absoluteNum2;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}