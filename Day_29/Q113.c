// Menu Driven Calculator

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Menu Driven Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                factorial();
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 6);
}

int addition() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
    return 0;
}

int subtraction() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a - b);
    return 0;
}

int multiplication() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
    return 0;
}

int division() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        printf("Result: %d\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}

int factorial() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Error: Factorial of negative numbers is not defined.\n");
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}