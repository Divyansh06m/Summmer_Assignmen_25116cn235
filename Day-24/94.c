//program to Compress a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compressString(const char* src) {
    int len = strlen(src);
    if (len == 0) return "";


    char* compressed = (char*)malloc(sizeof(char) * (len * 2 + 1));
    if (compressed == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    int i = 0;
    int index = 0;

    while (i < len) {
     
        compressed[index++] = src[i];


        int count = 1;
        while (i + 1 < len && src[i] == src[i + 1]) {
            count++;
            i++;
        }

        int written = sprintf(&compressed[index], "%d", count);
        index += written;

        i++;
    }
    
    compressed[index] = '\0'; 

   
    if (strlen(compressed) >= len) {
        free(compressed);

        return strdup(src); 
    }

    return compressed;
}

int main() {
    const char* str1 = "AAAABBBCCDDDDD";
    const char* str2 = "ABCD"; 

    char* res1 = compressString(str1);
    char* res2 = compressString(str2);

    printf("Original: %s  ->  Compressed: %s\n", str1, res1);
    printf("Original: %s  ->  Compressed: %s\n", str2, res2);

    
    free(res1);
    free(res2);

    return 0;
}