// Program to check for Strong Number

#include <stdio.h>

int main(){
    int n, sum=0,remainder, factorial=1, original, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&n);
    }
    original=n;
    while(n>0){
        remainder=n%10;
        for(i=1; i<=remainder; i++){
            factorial*=i;
        }
        sum += factorial;
        factorial=1;
        n/=10;
    }
    if(sum==original){
        printf("%d is a strong number",original);
    }
    else{
        printf("%d is not a strong number",original);  
    }
    return 0;
}