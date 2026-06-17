// Program for Recursive reverse of a number

#include <stdio.h>

int reverse_number(int n, int temp) {
    if (n==0) {
        return temp;
    }
    return reverse_number(n/10,temp*10 + (n%10));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num<0) {
        printf("Please enter a positive number: ");
        scanf("%d",&num);
    }
    printf("Reverse of %d is %d\n",num,reverse_number(num,0));
    return 0;
}