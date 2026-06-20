// Program to find row wise sum of a matrix

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

    int sum[r];
    for(int i = 0; i < r; i++) {
        sum[i] = 0;
        for(int j = 0; j < c; j++) {
            sum[i] += arr[i][j];
        }
    }

    printf("The row wise sum of the matrix is: \n");
    for(int i = 0; i < r; i++) {
        printf("Row %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}