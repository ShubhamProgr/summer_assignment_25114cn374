// Program to add matrices

#include <stdio.h>

int main(){
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    while(r1 <= 0 || c1 <= 0) {
        printf("Please enter positive integers for the number of rows and columns: ");
        scanf("%d %d", &r1, &c1);
    }

    int arr1[r1][c1];
    printf("Enter the elements of the first matrix: ");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    while(r2 <= 0 || c2 <= 0) {
        printf("Please enter positive integers for the number of rows and columns: ");
        scanf("%d %d", &r2, &c2);
    }

    if(r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added as their dimensions do not match.");
        return 0;
    }

    int arr2[r2][c2];
    printf("Enter the elements of the second matrix: ");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    int sum[r1][c1];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is: \n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}