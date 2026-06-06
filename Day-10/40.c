#include<stdio.h>
int main(){
    int row = 5;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row - i; j++){
            printf(" ");
        }
        for (char k = 'A'; k < 'A' + i; k++){
            printf("%c",k);
        }
        for (char k = 'A' + i - 2; k >= 'A'; k--){
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}