#include<stdio.h>
int main(){
    int n,count = 0;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n<0)
    n= -n;
    do{
        n /= 10;
        count++;

    }
    while(n!=0);
    printf("number of digits:%d", count );
    return 0;
}