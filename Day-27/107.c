//program to Create salary management system
#include <stdio.h>
#include <stdlib.h>

typedef struct Salary {
    int id;
    float amount;
} Salary;

int main() {
    int n, i;
    printf("Enter number of salary records: ");
    scanf("%d", &n);
    Salary *salaries = (Salary *)malloc(n * sizeof(Salary));
    for (i = 0; i < n; i++) {
        printf("Enter details for salary record %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &salaries[i].id);
        printf("Amount: ");
        scanf("%f", &salaries[i].amount);
    }
    printf("\nSalary Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Amount: %.2f\n", salaries[i].id, salaries[i].amount);
    }
    free(salaries);
    return 0;
}