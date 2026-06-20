//program to Remove duplicate characters
#include <stdio.h>
#include <string.h>

void removeDuplicatesBruteForce(char *str) {
    int len = strlen(str);
    if (len < 2) return;

    int targetIndex = 0; 

    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;

       
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1; 
                break;
            }
        }

       
        if (!isDuplicate) {
            str[targetIndex] = str[i];
            targetIndex++;
        }
    }

   
    str[targetIndex] = '\0';
}

int main() {
    char str[] = "programming principles";

    printf("Original String: \"%s\"\n", str);

    removeDuplicatesBruteForce(str);

    printf("Modified String: \"%s\"\n", str);

    return 0;
}