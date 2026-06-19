// Program to find diagonal sum of a matrix

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

    int sum = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements of the matrix is: %d", sum);

    return 0;
}