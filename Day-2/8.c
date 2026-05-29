#include<stdio.h>
int main(){
    int num,originalNum,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum=num;
    while(num>0){
        reverse=reverse*10+num%10;
        num=num/10;
    }
    if(originalNum==reverse)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;   
}