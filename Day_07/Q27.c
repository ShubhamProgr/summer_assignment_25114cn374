// Program for Recursive Sum of Digits

#include <stdio.h>

int sum_of_digits(int n) {
    if (n==0) {
        return 0;
    }
    return (n%10) + sum_of_digits(n/10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &num);
    }
    printf("Sum of digits of %d is %d\n",num,sum_of_digits(num));
    return 0;
}