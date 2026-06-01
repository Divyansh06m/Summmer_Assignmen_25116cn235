#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("positive mtlb 0 se bda hota hai.\n");
        return 1; 
    }

    printf("The factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}