//program to Check anagram strings
#include<stdio.h>
#include<string.h>  

int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int freq[256] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2){
        printf("Strings are not anagrams.\n");
        return 0;
    }
    for(int i = 0; i < len1; i++){
        freq[(unsigned char)str1[i]]++;
    }
    for(int i = 0; i < len2; i++){
        freq[(unsigned char)str2[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(freq[i] != 0){
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}