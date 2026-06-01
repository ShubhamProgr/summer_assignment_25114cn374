// Finding GCD of two numbers

#include <stdio.h>

int main() {
    int n1, n2, i, count = 0, divisors[100];

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            divisors[count++] = i; 
        }
    }
    printf("GCD is: %d\n", divisors[count - 1]);
    return 0;
}