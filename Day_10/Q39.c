// Program to print Number Pyramid Pattern

#include <stdio.h>

int main() {
    int i, j;
    for (i=1;i<=5;i++) {        
        for (j=1;j<5+i;j++) {
            if (j<=5-i) {
                printf(" ");
            } 
            else {
                int k = j - (5-i); 
                if (k<=i) {
                    printf("%d",k);
                } 
                else {
                    printf("%d",2*i-k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}