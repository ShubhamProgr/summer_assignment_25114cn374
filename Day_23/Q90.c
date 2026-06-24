// Program to find first repeating character

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    
    printf("Enter a word: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[ (int)str[i] ]++;
    }
    int found = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[ (int)str[i] ] > 1) {
            printf("The first repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("There are no repeating characters in this word.\n");
    }
    
    return 0;
}