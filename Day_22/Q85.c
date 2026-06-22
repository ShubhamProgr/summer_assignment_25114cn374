// Program to check Palindrome String

#include <stdio.h>

int main(){
    char str[100], rev[100];
    int len=0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[len] != '\0'){
        len++;
    }
    for(int i=0; i<len; i++){
        rev[i] = str[len-i-1];
    }
    rev[len] = '\0';
    if(str==rev){
        printf("%s is a palindrome string\n", str);
    } else {
        printf("%s is not a palindrome string\n", str);
    }
    return 0;
}