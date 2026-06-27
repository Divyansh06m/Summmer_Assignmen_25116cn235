//program to Develop complete mini project using arrays, strings and functions
#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100

struct Book {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int isbn;
    int available;
};
void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Book record is full!\n");
        return;
    }
    printf("Enter book title: ");
    scanf("%s", books[*count].title);
    printf("Enter author name: ");
    scanf("%s", books[*count].author);
    printf("Enter ISBN: ");
    scanf("%d", &books[*count].isbn);
    books[*count].available = 1;
    (*count)++;
}
int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    do {
        printf("\nMini Project: Library System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printf("Title: %s, Author: %s, ISBN: %d, Available: %s\n", books[i].title, books[i].author, books[i].isbn, books[i].available ? "Yes" : "No");
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