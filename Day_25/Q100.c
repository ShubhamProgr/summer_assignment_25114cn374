// Program to sort words by length

#include <stdio.h>
#include <string.h>

int main() {
    char word[100][100], temp[100];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter words: ");
    for (int i = 0; i < n; i++)
        scanf("%s", word[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Words sorted by length: ");
    for (int i = 0; i < n; i++)
        printf("%s ", word[i]);
    return 0;
}