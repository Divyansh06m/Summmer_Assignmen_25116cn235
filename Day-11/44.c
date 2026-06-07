//function to find factorial
#include<stdio.h>
int main(){
    int num, i, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
        return 0;
    }
    for (i = 1; i <= num; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %d", num, fact);
    return 0;
}