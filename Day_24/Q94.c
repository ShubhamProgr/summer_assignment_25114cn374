// Program for string compression 

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string to compress: ");
    scanf("%s", str);

    printf("Compressed string: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1; 
        while (str[i] == str[i + 1]) {
            count++; 
            i++;    
        }
        printf("%c%d", str[i], count);
    }
    
    printf("\n");
    return 0;
}