//program to Create bank account system
#include <stdio.h>
int main() {
    int account_numbers[50];
    char account_holders[50];
    float account_balances[50];

    int total_accounts = 0;
    int choice;

    while (1) {
        printf("\n--- BANK ACCOUNT MENU ---\n");
        printf("1. Add an Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (total_accounts >= 50) {
                printf("Bank is full!\n");
            } else {
                printf("\nEnter Account Number (Number): ");
                scanf("%d", &account_numbers[total_accounts]);

                printf("Enter Account Holder Name (No spaces): ");
                scanf("%s", account_holders[total_accounts]);

                printf("Enter Account Balance: ");
                scanf("%f", &account_balances[total_accounts]);

                total_accounts++;
                printf("Account added successfully!\n");
            }
        } 
        else if (choice == 2) {
            if (total_accounts == 0) {
                printf("\nNo accounts in the bank yet.\n");
            } else {
                printf("\n--- ACCOUNT LIST ---\n");
                for (int i = 0; i < total_accounts; i++) {
                    printf("Account Number: %d | Holder: %s | Balance: $%.2f\n", 
                           account_numbers[i], account_holders[i], account_balances[i]);
                }
            }
        } 
        else if (choice == 3) {
            printf("\nExiting program. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}