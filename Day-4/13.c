#include<stdio.h>
int main() {
    int a=0,b=1,n,i,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",a,b);
    for(i=2;i<n;++i) {
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
    return 0;
}