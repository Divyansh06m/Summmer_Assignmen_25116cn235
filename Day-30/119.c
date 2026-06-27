//program to Create mini employee management system
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100
struct Employee {
    char name[50];
    int id;
    float salary;
};
void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Employee record is full!\n");
        return;
    }
    printf("Enter employee name: ");
    scanf("%s", employees[*count].name);
    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter salary: ");
    scanf("%f", &employees[*count].salary);
    (*count)++;
}
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;
    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printf("Name: %s, ID: %d, Salary: %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
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