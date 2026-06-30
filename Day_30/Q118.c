// Mini Library Management System 

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Library Management System\n");
        printf("1. Books Status\n");
        printf("2. Books out for Rent\n");
        printf("3. Search Book Record\n");
        printf("4. View Readers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                books_status();
                break;
            case 2:
                view_books_out_for_rent();
                break;
            case 3:
                search_book_record();
                break;
            case 4:
                view_readers();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);

}

struct Book {
    char title[100];
    int id;
    char author[100];
    int is_available; 
    int charge;
};

struct Book books[100];

struct Reader {
    char name[100];
    int id;
    int book_id;
};

struct Reader readers[100];

void books_status() {
    printf("Books Status:\n");
    for(int i = 0; i < 100; i++) {
        printf("ID: %d, Title: %s, Author: %s, Available: %s, Charge: %d\n",
             books[i].id, books[i].title, books[i].author, books[i].is_available ? "Yes" : "No", books[i].charge);
    }
}

void view_books_out_for_rent() {
    printf("Books out for Rent:\n");
    for(int i = 0; i < 100; i++) {
        if(!books[i].is_available) {
            printf("ID: %d, Title: %s, Author: %s, Charge: %d\n Lended Out to Reader ID: %d\n",
                 books[i].id, books[i].title, books[i].author, books[i].charge, readers[i].book_id);
        }
    }
}

void search_book_record() {
    int search_id;
    printf("Enter Book ID to search: ");
    scanf("%d", &search_id);
    for(int i = 0; i < 100; i++) {
        if(books[i].id == search_id) {
            printf("Book Found: ID: %d, Title: %s, Author: %s, Available: %s, Charge: %d\n",
                 books[i].id, books[i].title, books[i].author, books[i].is_available ? "Yes" : "No", books[i].charge);
            return;
        }
    }
    printf("Book with ID %d not found.\n", search_id);
}

void view_readers() {
    printf("Readers:\n");
    for(int i = 0; i < 100; i++) {
        if(readers[i].id != 0) {
            printf("ID: %d, Name: %s, Book ID: %d\n", readers[i].id, readers[i].name, readers[i].book_id);
        }
    }
}