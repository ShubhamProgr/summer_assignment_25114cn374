// Program to count set bits in a number

#include <stdio.h>

int main(){
    int num, count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&num);
    }
    while(num>0){
        if(num%2==1){
            count++;
            num/=2;
        }
        else 
        continue;
        num/=2;
    }
    printf("The number of set bits in the given number is : %d",count);
    return 0;
}