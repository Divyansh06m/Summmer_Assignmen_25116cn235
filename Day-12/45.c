//function for palindrome
#include <stdio.h>
int main(){
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (sum == temp) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}