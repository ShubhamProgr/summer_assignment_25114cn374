// Program to check for string rotation 

#include <stdio.h>

int main(){
    char str[100], rev[100];
    int len = 0, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    for( int i = 0; str[i] != '\0'; i++){
        len++;
    }
    for( int i = 0; i < len; i++){
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    for( int i = 0; i < len; i++){
        if(str[i] != rev[i]){
            found = 1;
            break;
        }
    }
    if(found){
        printf("The string is not a palindrome.\n");
    } else {
        printf("The string is a palindrome.\n");
    }
    return 0;

}