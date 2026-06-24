//program to Create library management system
#include <stdio.h>

int main() {
   
    int book_ids[50];
    char book_titles[50];
    float book_prices[50];
    
    int total_books = 0;
    int choice;

    while (1) {
       
        printf("\n--- LIBRARY MENU ---\n");
        printf("1. Add a Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
          
            if (total_books >= 50) {
                printf("Library is full!\n");
            } else {
                printf("\nEnter Book ID (Number): ");
                scanf("%d", &book_ids[total_books]);

                printf("Enter Book Title (No spaces): ");
                scanf("%s", book_titles[total_books]);

                printf("Enter Book Price: ");
                scanf("%f", &book_prices[total_books]);

                total_books = total_books + 1; 
                printf("Book added successfully!\n");
            }
        } 
        else if (choice == 2) {
           
            if (total_books == 0) {
                printf("\nNo books in the library yet.\n");
            } else {
                printf("\n--- BOOK LIST ---\n");
                for (int i = 0; i < total_books; i++) {
                    printf("ID: %d | Title: %s | Price: $%.2f\n", 
                           book_ids[i], book_titles[i], book_prices[i]);
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