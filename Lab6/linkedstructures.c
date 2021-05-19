#include <stdio.h>
#include <stdlib.h>

typedef struct Books
{
    char *title;
    char *author;
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
      printf("Title: %s\nAuthor: %s\nPages: %d", temp1->title, temp1->author, temp1->pages);
      temp1 = temp1->next;
    }
}

struct Books* searchBook()
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

        if(start == NULL) {
            return NULL;
        }

        while (current->title != key) {
            if (current->next == NULL) {
                return NULL;
            }
            else {
                current = current->next;
            }
        }

        return current;
    }
}

struct Books* deleteBook()
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

        if(start == NULL) {
            return NULL;
        }

        while (current->title != key) {
            if (current->next == NULL) {
                return NULL;
            }
            else {
                previous = current;
                current = current->next;
            }
        }

        if (current == start) {
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
    printf("<<<<<<<<< WELCOME TO MY LIBRARY >>>>>>>>>>\n");

    int status = 1, choice;
    while (status == 1)
    {
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