// Program to Convert Binary to Decimal

#include<stdio.h>

int main(){
    int n, decimal=0, remainder, temp=1;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&n);
    }
    while(n>0){
        remainder=n%10;
        decimal += remainder*temp;
        n/=10;
        temp*=2;
    }
    printf("The decimal equivalent is : %d",decimal);
    return 0;
}