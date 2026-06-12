// Function to print the Fibonacci series up to n terms

#include <stdio.h>

int fibonacci(int n){
    int a=0, b=1, c;
    if(n==1){
        printf("%d", a);
        return 0;
    }
    else if(n==2){
        printf("%d %d ", a, b);
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            printf("%d ", a);
            c=a+b;
            a=b;
            b=c;
        }
        return 0;
    }
}

int main(){
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    while(num<=0){
        printf("Please enter a positive integer: ");
        scanf("%d", &num);
    }
    printf("Fibonacci Series: ");
    fibonacci(num);
    return 0;
}