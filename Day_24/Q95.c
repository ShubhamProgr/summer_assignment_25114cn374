// Program to find the longest word in a sentence

#include <stdio.h>

int main() {
    char str[100], longest_word[100] = {0}, temp[100]; 
    int i = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            temp[len++] = str[i];
        } else {
            temp[len] = '\0';

            if (len > max) {
                max = len;
                for (int j = 0; j <= len; j++)
                    longest_word[j] = temp[j];
            }

            len = 0;
        }
        i++;
    }
    if (len > max) {
        temp[len] = '\0';
        for (int j = 0; j <= len; j++)
            longest_word[j] = temp[j];
    }
    printf("Longest word: %s\n", longest_word);
    return 0;
}