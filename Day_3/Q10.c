#include <stdio.h>

int main() {
    int start, end, num, i, isPrime;
    printf("Enter the Range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (num = start; num <= end; num++) {
        isPrime = 1; 
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break; 
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}