//program to Create menu-driven string operations system
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int choice;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    
    do {
        printf("\nMenu:\n");
        printf("1. Convert to uppercase\n");
        printf("2. Convert to lowercase\n");
        printf("3. Display the string\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                for (int i = 0; str[i]; i++) {
                    str[i] = toupper(str[i]);
                }
                printf("String converted to uppercase.\n");
                break;
            case 2:
                for (int i = 0; str[i]; i++) {
                    str[i] = tolower(str[i]);
                }
                printf("String converted to lowercase.\n");
                break;
            case 3:
                printf("Current string: %s\n", str);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}