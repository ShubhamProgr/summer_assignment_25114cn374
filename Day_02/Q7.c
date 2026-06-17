// Product of digits of a number

#include <stdio.h>

int main() {
    int num, remainder, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 10;  
        product *= remainder; 
        num /= 10;        
        }

    printf("Product of digits = %d", product);
    return 0;
}