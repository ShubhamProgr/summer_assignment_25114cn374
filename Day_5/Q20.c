// Program to find the Largest Prime Factor of a number

#include <stdio.h>

int main(){
    int n,largest_factor=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&n);
    }
    for(int i=2; i<=n; i++){
        while(n%i==0){
            largest_factor=i;
            n/=i;
        }
    }
    printf("The largest prime factor is : %d",largest_factor);
    return 0;
}