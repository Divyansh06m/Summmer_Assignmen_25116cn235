//program to Find first repeating character
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int freq[256] = {0};
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i = 0; i < len; i++){
        if(freq[(unsigned char)str[i]] > 1){
            printf("First repeating character is: %c\n", str[i]);
            return 0;
        }
    }
    printf("No repeating character found.\n");
    return 0;
}