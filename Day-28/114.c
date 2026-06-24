//program to Create contact management system
#include <stdio.h>
int main() {
    char contact_names[50][100];
    char contact_phones[50][20];
    char contact_emails[50][100];

    int total_contacts = 0;
    int choice;

    while (1) {
        printf("\n--- CONTACT MANAGEMENT MENU ---\n");
        printf("1. Add a Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (total_contacts >= 50) {
                printf("Contact list is full!\n");
            } else {
                printf("\nEnter Contact Name (No spaces): ");
                scanf("%s", contact_names[total_contacts]);

                printf("Enter Contact Phone Number: ");
                scanf("%s", contact_phones[total_contacts]);

                printf("Enter Contact Email: ");
                scanf("%s", contact_emails[total_contacts]);

                total_contacts++;
                printf("Contact added successfully!\n");
            }
        } 
        else if (choice == 2) {
            if (total_contacts == 0) {
                printf("\nNo contacts in the list yet.\n");
            } else {
                printf("\n--- CONTACT LIST ---\n");
                for (int i = 0; i < total_contacts; i++) {
                    printf("Name: %s | Phone: %s | Email: %s\n", 
                           contact_names[i], contact_phones[i], contact_emails[i]);
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