// Function to find the Maximum

#include <stdio.h>

int max(int a, int b, int c) {
    if(a>b && a>c) {
        return a;
    } 
    else if(b>a && b>c) {
        return b;
    } 
    else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The maximum of %d, %d and %d is %d\n", num1, num2, num3, max(num1, num2, num3));
    return 0;
}