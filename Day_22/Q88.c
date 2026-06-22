// Program to remove spaces from a string

#include <stdio.h>

int main(){
    char str[100], j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!=' ' && str[i]!='\n' && str[i]!='\t'){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("String after removing spaces: %s", str);
    return 0;
}