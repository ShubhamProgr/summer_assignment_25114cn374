// Function for Armstrong Number

#include <stdio.h>  

int armstrong(int n){
    int original, remainder, result=0;
    original=n;
    while(n!=0){
        remainder=n%10;
        result+=remainder*remainder*remainder;
        n/=10;
    }
    return result;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num<0){
        printf("Please enter a positive number: ");
        scanf("%d", &num);
    }
    if(armstrong(num)==num){
        printf("%d is an Armstrong number", num);
    }
    else{
        printf("%d is not an Armstrong number", num);
    }
    return 0;
}