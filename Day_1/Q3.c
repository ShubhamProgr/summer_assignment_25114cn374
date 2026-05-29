// Factorial of a number

#include <stdio.h>

int main() {
   int factorial=1,num ;
   printf("Enter the number you want factorial of: ");
   scanf("%d",&num);
   if(num==0)
   factorial=1;
   
   else{
   for(int i=1;i<=num;i++){
       factorial*=i;
       }
       
   }
   printf("The factorial of %d is %d",num,factorial);
   
   return 0;
}