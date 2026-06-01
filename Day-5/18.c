#include <stdio.h>

int main() {
    int num, takenvalue, remainder, sum = 0, i, fact;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    takenvalue = num;
    while (num > 0) {
        remainder = num % 10;
        fact = 1;

        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact; 
        num /= 10;    
    }
    if (sum == takenvalue && takenvalue > 0) {
        printf("%d is a Strong Number.\n", takenvalue);
    } else {
        printf("%d is not a Strong Number.\n", takenvalue);
    }

    return 0;
}