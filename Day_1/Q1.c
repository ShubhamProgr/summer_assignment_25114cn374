#include <stdio.h>

int main(){
    int sum = 0, n, i;
    printf("Enter the number upto which you want the sum: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;
}