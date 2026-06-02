//Decimal to binary
#include <stdio.h>{
int decimal,original,binary;
int i=0;
printf("Enter a decimal number: ");
scanf("%d", &decimal);
original=decimal;
while(decimal>0)
{
    binary=binary+(decimal%2)*pow(10,i);
    decimal=decimal/2;
    i++;
}
printf("Binary of %d is: %d\n", original, binary);
return 0;
}