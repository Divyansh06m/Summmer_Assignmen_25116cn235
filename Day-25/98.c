//program to Find common characters in strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int common[len1 < len2 ? len1 : len2];
    int k = 0;

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                common[k++] = str1[i];
                break;
            }
        }
    }

    printf("Common characters: ");
    for (int l = 0; l < k; l++) {
        printf("%c ", common[l]);
    }
    return 0;
}