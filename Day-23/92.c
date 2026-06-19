//program to Find maximum occurring character
#include<stdio.h>
#include<string.h>
int main (){
    char str [100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int freq[256] = {0};
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        freq[(unsigned char)str[i]]++;
    }
    int max_freq = 0;
    char max_char;
    for(int i = 0; i < 256; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            max_char = (char)i;
        }
    }
    printf("Maximum occurring character is: %c\n", max_char);
    return 0;
}