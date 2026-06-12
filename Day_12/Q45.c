// Function for Palindrome 

#include <stdio.h>

int palindrome(int n){
    int reverse=0, remainder;
    while(n>0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    return reverse;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num<0){
        printf("Please enter a non-negative number: ");
        scanf("%d", &num);
    }
    printf("The reverse of %d is %d",num,palindrome(num));
    return 0;
}   