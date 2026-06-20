// Program to find column wise sum of a matrix

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

    int sum[c];
    for(int j = 0; j < c; j++) {
        sum[j] = 0;
        for(int i = 0; i < r; i++) {
            sum[j] += arr[i][j];
        }
    }

    printf("The column wise sum of the matrix is: \n");
    for(int j = 0; j < c; j++) {
        printf("Column %d: %d\n", j + 1, sum[j]);
    }

    return 0;
}