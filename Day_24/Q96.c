// Program to remove duplicate characters from a string

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string to remove duplicates: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");
    for (int i = 0; str[i] != '\0'; i++) {
        while (str[i] == str[i + 1]) {
            i++;    
        }
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}