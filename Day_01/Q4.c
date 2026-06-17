// Count the number of digits in a number

#include <stdio.h>

int main() {
    int count = 0,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        n /= 10;
        count++;
    } while (n != 0);

    printf("Total digits: %d", count);
    return 0;
}