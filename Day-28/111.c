//program to Create ticket booking system
#include <stdio.h>
int main() {
    int ticket_ids[50];
    char ticket_names[50];
    float ticket_prices[50];

    int total_tickets = 0;
    int choice;

    while (1) {
        printf("\n--- TICKET BOOKING MENU ---\n");
        printf("1. Add a Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (total_tickets >= 50) {
                printf("Ticket booking is full!\n");
            } else {
                printf("\nEnter Ticket ID (Number): ");
                scanf("%d", &ticket_ids[total_tickets]);

                printf("Enter Ticket Name (No spaces): ");
                scanf("%s", ticket_names[total_tickets]);

                printf("Enter Ticket Price: ");
                scanf("%f", &ticket_prices[total_tickets]);

                total_tickets++;
                printf("Ticket added successfully!\n");
            }
        } 
        else if (choice == 2) {
            if (total_tickets == 0) {
                printf("\nNo tickets booked yet.\n");
            } else {
                printf("\n--- TICKET LIST ---\n");
                for (int i = 0; i < total_tickets; i++) {
                    printf("Ticket ID: %d | Name: %s | Price: $%.2f\n", 
                           ticket_ids[i], ticket_names[i], ticket_prices[i]);
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