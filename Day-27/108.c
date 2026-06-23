//program to Create marksheet generation system
#include <stdio.h>
#include <stdlib.h>

typedef struct Marksheet {
    int id;
    float marks;
} Marksheet;

int main() {
    int n, i;
    printf("Enter number of marksheet records: ");
    scanf("%d", &n);
    Marksheet *marksheets = (Marksheet *)malloc(n * sizeof(Marksheet));
    for (i = 0; i < n; i++) {
        printf("Enter details for marksheet record %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &marksheets[i].id);
        printf("Marks: ");
        scanf("%f", &marksheets[i].marks);
    }
    printf("\nMarksheet Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Marks: %.2f\n", marksheets[i].id, marksheets[i].marks);
    }
    free(marksheets);
    return 0;
}