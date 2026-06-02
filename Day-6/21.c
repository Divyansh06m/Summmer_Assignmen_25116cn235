//Decimal to binary
#include <stdio.h>

int main() {
    int decimal, original, bi;
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    original = decimal;
    bi = 0;
    while(decimal>0) {
        bi=bi+(decimal%2)*pow(10,i);
        decimal=decimal/2;
        i++;
    }
    printf("bi of %d is: %d\n", original, bi);
    return 0;
}