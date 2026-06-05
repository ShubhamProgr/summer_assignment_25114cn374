// Program to print the factors of a number

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&n);
    }
    printf("The factors of %d are : ",n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}