// Program to count words in a sentence

#include <stdio.h>

int main(){
    char str[100];
    int count=0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            count++;
        }
    }
    printf("Number of words in the sentence: %d\n", count+1);
    return 0;
}