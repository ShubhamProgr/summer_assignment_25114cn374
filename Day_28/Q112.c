// Contact Management System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Contact Management System\n");
        printf("1. View All Contacts\n");
        printf("2. Add Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                view_all_contacts();
                break;
            case 2:
                add_contact();
                break;
            case 3:
                delete_contact();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 4);
}

struct Contact {
    char name[100];
    char phone[15];
};

struct Contact contacts[100] = {
    {"Father", "1111111111"},
    {"Mother", "2222222222"},
    {"Sister", "3333333333"},
    {"Brother", "4444444444"},
};

void view_all_contacts() {
    printf("All Contacts:\n");
    for(int i = 0; i < 100; i++) {
        if(contacts[i].name[0] != '\0') {
            printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
        }
    }
}

void add_contact() {
    char name[100];
    char phone[15];
    printf("Enter contact name: ");
    scanf("%s", name);
    printf("Enter contact phone: ");
    scanf("%s", phone);

    for(int i = 0; i < 100; i++) {
        if(contacts[i].name[0] == '\0') {
            strcpy(contacts[i].name, name);
            strcpy(contacts[i].phone, phone);
            printf("Contact added successfully!\n");
            return;
        }
    }
    printf("Contact list is full! Cannot add more contacts.\n");
}

void delete_contact() {
    char name[100];
    printf("Enter contact name to delete: ");
    scanf("%s", name);

    for(int i = 0; i < 100; i++) {
        if(strcmp(contacts[i].name, name) == 0) {
            contacts[i].name[0] = '\0'; // Mark as deleted
            printf("Contact %s deleted successfully!\n", name);
            return;
        }
    }
    printf("Contact %s not found.\n", name);
}

