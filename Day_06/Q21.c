// Program to Convert Decimal to Binary

#include<stdio.h>

int main(){
    int n, binary=0, remainder, temp=1;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&n);
    }
    while(n>0){
        remainder=n%2;
        binary += remainder*temp;
        n/=2;
        temp*=10;
    }
    printf("The binary equivalent is : %d",binary);
    return 0;
}