//Write a program to Create employee management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    Employee *employees = (Employee *)malloc(n * sizeof(Employee));
    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\nEmployee Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
    free(employees);
    return 0;
}