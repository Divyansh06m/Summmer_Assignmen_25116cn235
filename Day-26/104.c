//program to Create quiz application
#include <stdio.h>
int main() {
    int score = 0;
    int answer;

    printf("Welcome to the Quiz Application!\n");

    printf("Question 1: What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is Paris.\n");
    }

    printf("\nQuestion 2: What is 5 + 7?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 12.\n");
    }

    printf("\nQuestion 3: Who wrote 'Romeo and Juliet'?\n");
    printf("1. Charles Dickens\n2. William Shakespeare\n3. Mark Twain\n4. Jane Austen\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is William Shakespeare.\n");
    }

    printf("\nYour final score is: %d out of 3\n", score);
    
    return 0;
}