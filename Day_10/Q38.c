// Program to print Reverse Star Pyramid Pattern

#include <stdio.h>

int main(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=10-i;j++){
            if (j<i){
                printf(" ");
            } 
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}