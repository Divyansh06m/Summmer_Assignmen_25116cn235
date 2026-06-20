//program to Find longest word
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char *str, char *longestWord) {
    int maxLen = 0;
    int currentLen = 0;
    int startIdx = 0;
    int maxStartIdx = 0;
    int i = 0;

    while (str[i] != '\0') {

        while (str[i] != '\0' && (isspace(str[i]) || ispunct(str[i]))) {
            i++;
        }

        if (str[i] == '\0') break;

        startIdx = i;
        currentLen = 0;

        while (str[i] != '\0' && !isspace(str[i]) && !ispunct(str[i])) {
            currentLen++;
            i++;
        }

        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxStartIdx = startIdx;
        }
    }

    strncpy(longestWord, &str[maxStartIdx], maxLen);
    longestWord[maxLen] = '\0'; 
}

int main() {
    char str[] = "Learning C programming is completely fascinating and fun.";
    char longest; 
    printf("Original String: \"%s\"\n", str);
    
    findLongestWord(str, longest);

    if (strlen(longest) > 0) {
        printf("The longest word is: \"%s\" (Length: %lu)\n", longest, strlen(longest));
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}