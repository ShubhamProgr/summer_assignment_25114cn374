// Program to count character frequency in a string

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a single word: ");
    scanf("%s", str); 
    for (int i = 0; str[i] != '\0'; i++) {
        freq[ str[i] ]++; 
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}