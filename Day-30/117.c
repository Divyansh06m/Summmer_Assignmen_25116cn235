//program to Create student record system using arrays and strings
#include <stdio.h>  
#include <string.h>
#define MAX 100
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX) {
        printf("Student record is full!\n");
        return;
    }
    printf("Enter student name: ");
    scanf("%s", students[*count].name);
    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll_no);
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
}
int main() {
    struct Student students[MAX];
    int count = 0;
    int choice;
    do {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);
    return 0;
}