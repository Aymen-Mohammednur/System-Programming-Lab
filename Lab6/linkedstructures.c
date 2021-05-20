#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Books
{
    char title[20];
    char author[20];
    int pages;
    struct Books *next;
} Book;

struct Books *start = NULL;

void addBook()
{   
    struct Books* book1 = (struct Books*) malloc(sizeof(struct Books));

    printf("Enter the book's title: ");
    scanf("%s", book1->title);
    printf("Enter the book's author: ");
    scanf("%s", book1->author);
    printf("Enter the book's page number: ");
    scanf("%d", &book1->pages);

    book1->next = start;
    start = book1;

    printf("\nBook Added!\n");
}

void displayBooks()
{
    struct Books *temp1 = start;

    if (temp1 == NULL) { 
        printf("There are no books in the library! \n");
    }

    while(temp1 != NULL) {
      printf("\nTitle: %s\nAuthor: %s\nPages: %d\n", temp1->title, temp1->author, temp1->pages);
      temp1 = temp1->next;
    }
}

void searchBook()
{   
    struct Books *temp1 = start;

    if (temp1 == NULL) { 
        printf("There are no books in the library! \n");
    }

    else {
        char key[20];
        printf("Enter the book's title: ");
        scanf("%s", key);

        struct Books* current = start;

        while (current != NULL && strcmp(current->title, key) != 0) {
                current = current->next;
        }

        if (current == NULL) {
            printf("No results found.\n");
            return;
        }
        else {
            printf("\nSearch Results...\n");
            printf("\nTitle: %s\nAuthor: %s\nPages: %d\n", current->title, current->author, current->pages);
        } 
    }
}

void deleteBook()
{   
    struct Books *temp1 = start;

    if (temp1 == NULL) { 
        printf("There are no books in the library! \n");
    }

    else {
        char key[20];
        printf("Enter the book's title: ");
        scanf("%s", key);

        struct Books* current = start;
        struct Books* previous = NULL;

        while (current != NULL && strcmp(current->title, key) != 0) {
            previous = current;
            current = current->next;
        }

        if (current == NULL) {
            printf("No such book to delete\n");
            return;
        }
        else if (current == start) {
            start = start->next;
        }
        else {
            previous->next = current->next;
        }
        
        printf("\nBook Deleted!\n");
    }
}

void main() 
{
    int status = 1, choice;
    while (status == 1)
    {
        printf("\n<<<<<<<<< WELCOME TO MY LIBRARY >>>>>>>>>>\n");
        printf("1 - to add a new book\n");
        printf("2 - to display the books in the library\n");
        printf("3 - to search a book\n");
        printf("4 - to delete a book\n");
        printf("5 - quit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            addBook();
            printf("\n");
        }
        else if (choice == 2) {
            displayBooks();
            printf("\n");
        }
        else if (choice == 3) {
            searchBook();
            printf("\n");
        }
        else if (choice == 4) {
            deleteBook();
            printf("\n");
        }
        else if (choice == 5) {
            status = 0;
            _Exit(0);
        }
        else {
            printf("Invalid input! Enter a valid input.\n");
        }
    }
}