// Program to transpose a matrix

#include <stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    while(r <= 0 || c <= 0) {
        printf("Please enter positive integers for the number of rows and columns: ");
        scanf("%d %d", &r, &c);
    }

    int arr[r][c];
    printf("Enter the elements of the matrix: ");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[c][r];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

    printf("The transpose of the matrix is: \n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}