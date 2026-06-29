// Bank Account System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Bank Account System\n");
        printf("1. Account Status\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                account_status();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                check_balance();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);
}

struct Account {
    char name[100];
    int account_number;
    int pin;
    float balance;
};

struct Account customer;

void account_status() {
    int acc_num, temp_pin;
    printf("Enter your Account Number  :\n");
    scanf("%d", &acc_num);
    printf("Enter your PIN: ");
    scanf("%d", &temp_pin);

    if(acc_num == customer.account_number && temp_pin == customer.pin) {
        printf("Account Status:\n");
        printf("Name: %s\n", customer.name);
        printf("Account Number: %d\n", customer.account_number);
        printf("Balance: %.2f\n", customer.balance);
    } else {
        printf("Account not found!\n");
    }
}

void deposit() {
    int acc_num, temp_pin;
    float amount;
    printf("Enter your Account Number  :\n");
    scanf("%d", &acc_num);
    printf("Enter your PIN: ");
    scanf("%d", &temp_pin);

    if(acc_num == customer.account_number && temp_pin == customer.pin) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        customer.balance += amount;
        printf("Deposit successful! New Balance: %.2f\n", customer.balance);
    } else {
        printf("Account not found!\n");
    }
}

void withdraw() {
    int acc_num, temp_pin;
    float amount;
    printf("Enter your Account Number  :\n");
    scanf("%d", &acc_num);
    printf("Enter your PIN: ");
    scanf("%d", &temp_pin);

    if(acc_num == customer.account_number && temp_pin == customer.pin) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if(amount <= customer.balance) {
            customer.balance -= amount;
            printf("Withdrawal successful! New Balance: %.2f\n", customer.balance);
        } 
        else {
            printf("Insufficient balance!\n");
        }
    } 
    else {
        printf("Account not found!\n");
    }
}

void check_balance() {
    int acc_num, temp_pin;
    printf("Enter your Account Number  :\n");
    scanf("%d", &acc_num);
    printf("Enter your PIN: ");
    scanf("%d", &temp_pin);

    if(acc_num == customer.account_number && temp_pin == customer.pin) {
        printf("Current Balance: %.2f\n", customer.balance);
    } 
    else {
        printf("Account not found!\n");
    }
}