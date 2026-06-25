// Program to sort names alphabetically

#include <stdio.h>
#include <string.h>

int main() {
    char name[100][100], temp[100];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:");
    for (int i = 0; i < n; i++)
        scanf("%s", name[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:");
    for (int i = 0; i < n; i++)
        printf("%s ", name[i]);

    return 0;
}