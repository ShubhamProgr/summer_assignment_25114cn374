// Function to calculate the factorial of a number

#include <stdio.h>

int factorial(int n) {
    int fact=1;
    if(n<0){
        printf("Factorial for negative numbers is not defined");
        return 0;
    }
    else if(n==0 || n==1){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}