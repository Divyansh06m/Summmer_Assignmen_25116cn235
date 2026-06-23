//program to Create student record management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student {
    int id;
    char name[50];
    float marks;
} Student;
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student *students = (Student *)malloc(n * sizeof(Student));
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
    free(students);
    return 0;
}