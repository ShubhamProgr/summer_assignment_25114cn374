// Ticket Booking System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Ticket Booking System\n");
        printf("1. View Available Tickets\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                view_available_tickets();
                break;
            case 2:
                book_ticket();
                break;
            case 3:
                cancel_ticket();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 4);
}

struct Ticket {
    int id;
    char from[100];
    char to[100];
    int price;
    int is_booked; 
};

struct Ticket tickets[100] = {
    {1, "Delhi", "Mumbai", 300, 0},
    {2, "Mumbai", "Chennai", 200, 0},
    {3, "Chennai", "Kolkata", 150, 0},
    {4, "Kolkata", "Delhi", 100, 0},
};

void view_available_tickets() {
    printf("Available Tickets:\n");
    for(int i = 0; i < 100; i++) {
        if(!tickets[i].is_booked) {
            printf("Ticket ID: %d, From: %s, To: %s, Price: %d\n", tickets[i].id, tickets[i].from, tickets[i].to, tickets[i].price);
        }
    }
}

void book_ticket() {
    int ticket_id;
    printf("Enter Ticket ID to book: ");
    scanf("%d", &ticket_id);

    for(int i = 0; i < 100; i++) {
        if(tickets[i].id == ticket_id && !tickets[i].is_booked) {
            tickets[i].is_booked = 1;
            printf("Ticket ID %d booked successfully!\n", ticket_id);
            return;
        }
    }
    printf("Ticket ID %d is not available for booking.\n", ticket_id);
}

void cancel_ticket() {
    int ticket_id;
    printf("Enter Ticket ID to cancel: ");
    scanf("%d", &ticket_id);

    for(int i = 0; i < 100; i++) {
        if(tickets[i].id == ticket_id && tickets[i].is_booked) {
            tickets[i].is_booked = 0;
            printf("Ticket ID %d canceled successfully!\n", ticket_id);
            return;
        }
    }
    printf("Ticket ID %d is not booked or does not exist.\n", ticket_id);
}