// Program to print Armstron numbers in a range 

#include <stdio.h>

int main(){
    int lower_limit, upper_limit, n, remainder, result;
    printf("Enter the lower limit :");
    scanf("%d",&lower_limit);
    printf("Enter the upper limit :");
    scanf("%d",&upper_limit);
    printf("Armstrong numbers between %d and %d are : ", lower_limit, upper_limit);
    for(int i=lower_limit; i<=upper_limit; i++){
        n=i;
        result=0;
        while(n!=0){
            remainder = n%10;
            result += remainder*remainder*remainder;
            n /= 10;
        }
        if(result == i){
            printf("%d ", i);
        }
    }
    return 0;
}