// Program for finding the maximum frequncy character

#include <stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};
    
    printf("Enter a word: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        freq[str[i]]++;
    }
    int max_frequency = 0;
    char max_character;
    for(int i = 0; str[i] != '\0'; i++){
        if(freq[str[i]] > max_frequency){
            max_frequency = freq[str[i]];
            max_character = str[i];
        }
    }
    printf("The maximum frequency character is: '%c' with frequency %d\n", max_character, max_frequency);
    return 0;
}