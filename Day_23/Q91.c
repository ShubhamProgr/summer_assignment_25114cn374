// Program to check for anagram strings

#include <stdio.h>

int main(){
    char str1[100], str2[100];
    int freq[256] = {0}, anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    for( int i = 0; str1[i] != '\0'; i++){
        freq[str1[i]]++;
    }
    for( int i = 0; str2[i] != '\0'; i++){
        freq[str2[i]]--;
    }
    for( int i = 0; i < 256; i++){
        if(freq[i] != 0){
            anagram = 0;
            break;
        }
    }
    if(anagram){
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.");
    }
    return 0;
}