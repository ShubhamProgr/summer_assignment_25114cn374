// Program to find x raised to the power n without using pow() function

#include <stdio.h>

int main(){
    int num, result=1, pow;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num<=0){
        printf("Please enter a positive number : ");
        scanf("%d",&num);
    }
    printf("Enter the power : ");
    scanf("%d",&pow);
    while(pow<0){
        printf("Please enter a non-negative number : ");
        scanf("%d",&pow);
    }
    for(int i=0;i<pow;i++){
        result*=num;
    }
    printf("%d raised to the power %d is : %d",num,pow,result);
    return 0;
}