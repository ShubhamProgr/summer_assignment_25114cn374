// Reversing a number

#include <stdio.h>

int main() {
    int num, remainder, reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 10;          
        reversed = (reversed * 10) + remainder; 
        num /= 10;                     
    }

    printf("Reversed Number: %d\n", reversed);
    return 0;
}