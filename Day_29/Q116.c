// Inventory Management System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Inventory Management System\n");
        printf("1. View Inventory\n");
        printf("2. Add Item\n");
        printf("3. Remove Item\n");
        printf("4. Update Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                view_inventory();
                break;
            case 2:
                add_item();
                break;
            case 3:
                remove_item();
                break;
            case 4:
                update_item();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);
}

struct Item {
    char name[100];
    int quantity;
    float price;
};

struct Item inventory[100] = {
    {"Smartphones", 10, 1000.0},
    {"Laptops", 20, 2500.0},
    {"Tablets", 15, 1200.0},
    {"Cameras", 30, 1800.0},
};

void view_inventory() {
    printf("Inventory:\n");
    for(int i = 0; i < 100; i++) {
        if(inventory[i].name[0] != '\0') {
            printf("Item: %s, Quantity: %d, Price: %.2f\n", inventory[i].name, inventory[i].quantity, inventory[i].price);
        }
    }
    int total_items = 0;
    for(int i = 0; i < 100; i++) {
        if(inventory[i].name[0] != '\0') {
            total_items += inventory[i].quantity;
        }
    }
    printf("Total Items: %d\n", total_items);
}

void add_item() {
    char name[100];
    int quantity;
    float price;
    printf("Enter item name: ");
    scanf("%s", name);
    printf("Enter item quantity: ");
    scanf("%d", &quantity);
    printf("Enter item price: ");
    scanf("%f", &price);

    for(int i = 0; i < 100; i++) {
        if(inventory[i].name[0] == '\0') {
            strcpy(inventory[i].name, name);
            inventory[i].quantity = quantity;
            inventory[i].price = price;
            printf("Item added successfully!\n");
            return;
        }
    }
    printf("Inventory is full! Cannot add more items.\n");
}

void remove_item() {
    char name[100];
    printf("Enter item name to remove: ");
    scanf("%s", name);

    for(int i = 0; i < 100; i++) {
        if(strcmp(inventory[i].name, name) == 0) {
            inventory[i].name[0] = '\0'; 
            printf("Item removed successfully!\n");
            return;
        }
    }
    printf("Item not found in inventory.\n");
}

void update_item() {
    char name[100];
    printf("Enter item name to update: ");
    scanf("%s", name);

    for(int i = 0; i < 100; i++) {
        if(strcmp(inventory[i].name, name) == 0) {
            int new_quantity;
            float new_price;
            printf("Enter new quantity: ");
            scanf("%d", &new_quantity);
            printf("Enter new price: ");
            scanf("%f", &new_price);
            inventory[i].quantity = new_quantity;
            inventory[i].price = new_price;
            printf("Item updated successfully!\n");
            return;
        }
    }
    printf("Item not found in inventory.\n");
}