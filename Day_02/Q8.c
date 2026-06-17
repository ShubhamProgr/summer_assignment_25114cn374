// Checking whether a number is palindrome or not

#include <stdio.h>

int main() {
    int num, remainder, reversed = 0,temp;
    
    printf("Enter a positive number: ");
    scanf("%d", &num);
    temp=num;

    while (num > 0) {
        remainder = num % 10;          
        reversed = (reversed * 10) + remainder; 
        num /= 10;                     
    }
    if(reversed==temp)
    printf("The Number is Palindrome");
    else
    printf("The Number is not Palindrome");
    
    return 0;
    
}