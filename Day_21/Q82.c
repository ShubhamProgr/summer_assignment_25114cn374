// Program to reverse a string

#include <stdio.h>

int main(){
    char str[100], rev[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%s", str); 
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; 
    printf("Reversed string: %s", rev);
    return 0;
}