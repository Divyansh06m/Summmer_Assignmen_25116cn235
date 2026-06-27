//program to Create inventory management system
#include<stdio.h>
#include<string.h>
struct Item {
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Item items[100];
    int n, choice;
    
    printf("Enter the number of items: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter name of item %d: ", i + 1);
        scanf("%s", items[i].name);
        printf("Enter quantity of item %d: ", i + 1);
        scanf("%d", &items[i].quantity);
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &items[i].price);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1. Display all items\n");
        printf("2. Search for an item\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Inventory List:\n");
                for (int i = 0; i < n; i++) {
                    printf("Item %d: Name: %s, Quantity: %d, Price: %.2f\n", 
                           i + 1, items[i].name, items[i].quantity, items[i].price);
                }
                break;
            case 2:
                {
                    char searchName[50];
                    int found = 0;
                    printf("Enter the name of the item to search: ");
                    scanf("%s", searchName);
                    for (int i = 0; i < n; i++) {
                        if (strcmp(items[i].name, searchName) == 0) {
                            printf("Item found: Name: %s, Quantity: %d, Price: %.2f\n", 
                                   items[i].name, items[i].quantity, items[i].price);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Item not found in inventory.\n");
                    }
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);
    
    return 0;
}