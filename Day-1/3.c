#include<stdio.h>
int main (){
    int n,fact=1;
    printf("enter an integer: ");
    scanf("%d",&n);


    if(n<0)
    printf("you are idiot");
    else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        printf("factorial of %d=%d",n,fact);
    }
    return 0;

}