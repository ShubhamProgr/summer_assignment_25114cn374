// Program to print Character Pyramid Pattern

#include <stdio.h>

int main() {
    int i, j;
    for (i=1;i<=5;i++) {        
        for (j=1;j<5+i;j++) {
            if (j<=5-i) {
                printf(" ");
            } 
            else {
                int k=j-(5-i);                 
                if (k<=i) {
                    printf("%c",k+64);
                } 
                else {
                    printf("%c",(2*i-k)+64);
                }
            }
        }
        printf("\n");
    }
    return 0;
}