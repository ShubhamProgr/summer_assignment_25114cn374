// Function for Perfect Number

#include <stdio.h>

int perfect_number(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num<=0){
        printf("Please enter a positive number: ");
        scanf("%d", &num);
    }
    if(perfect_number(num)==2*num){
        printf("%d is a perfect number", num);
    }
    else{
        printf("%d is not a perfect number", num);
    }
    return 0;
}