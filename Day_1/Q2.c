// Multiplication table of a number

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter an integer to see its multiplication table: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}