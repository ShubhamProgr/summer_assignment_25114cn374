// Program to generate Fibonacci Series

#include <stdio.h>

int main(){
    int n, a=0, b=1, c;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    if(n==1){
        printf("Fibonacci Series : %d",a);
    }
    else if(n==2){
        printf("Fibonacci Series : %d %d",a,b);
    }
    else{
    printf("Fibonacci Series : ");
    for(int i=0; i<n; i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
            }
        }