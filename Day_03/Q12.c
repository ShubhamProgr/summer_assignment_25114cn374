// Finding LCM of two numbers

#include <stdio.h>

int main() {
    int n1, n2, i, count = 0, multiples[100]; 

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 * n2; i++) {
        if (i % n1 == 0 && i % n2 == 0) {
            multiples[count++] = i;
            break; 
        }
    }
    printf("The Least Common Multiple (LCM) is: %d\n", multiples[0]);
    return 0;
}