// Program to print nth term of fibonacci series

#include <stdio.h>

int main(){
    int n, a=0, b=1, c;
    printf("Enter the term number :");
    scanf("%d",&n);
    if(n == 1){
        printf("The %d term of fibonacci series is : %d",n,a);
    }
    else if(n == 2){
        printf("The %d term of fibonacci series is : %d",n,b);
    }
    else{
        for(int i=3; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %d term of fibonacci series is : %d",n,b);
    }
}