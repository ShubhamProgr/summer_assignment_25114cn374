// Menu Driven String operations system

#include <stdio.h>

int main(){
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int key;

    do{
        printf("Menu Driven String Operations System\n");
        printf("1. String Concatenation\n");
        printf("2. String Comparison\n");
        printf("3. String Length\n");
        printf("4. String Copy\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                string_concatenation(str1, str2);
                break;
            case 2:
                string_comparison(str1, str2);
                break;
            case 3:
                string_length(str1, str2);
                break;
            case 4:
                string_copy(str1, str2);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);
}

void string_concatenation(char str1[], char str2[]) {
    char result[200];
    int i = 0, j = 0;

    while(str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    printf("Concatenated String: %s\n", result);
}

void string_comparison(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            printf("Strings are not equal.\n");
            return;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } 
    else {
        printf("Strings are not equal.\n");
    }
}

void string_length(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;
    while(str1[len1] != '\0') {
        len1++;
    }
    while(str2[len2] != '\0') {
        len2++;
    }
    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);
}

void string_copy(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied String: %s\n", str2);
}