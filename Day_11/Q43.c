// Function to check the Prime Number

#include <stdio.h>

int prime(int a){
    if(a<=1 || a==0){
        printf("%d is not a prime number", a);
        return 0;
    }
    else{
        for(int i=2; i<=a/2; i++){
            if(a%i==0){
                printf("%d is not a prime number", a);
                return 0;
            }
        }
        printf("%d is a prime number", a);
        return 1;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}