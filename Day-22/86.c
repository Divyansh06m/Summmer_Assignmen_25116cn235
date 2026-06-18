//program to Count words in a sentence
#include <stdio.h>

int main() {
    char sentence[100];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            wordCount++;
        }
    }
    wordCount++;

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}