// Program to check symmetric matrix

#include <stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    while(r <= 0 || c <= 0 || r != c) {
        printf("Please enter positive integers for the number of rows and columns: \n");
        scanf("%d %d", &r, &c);
    }

    int arr[r][c];
    printf("Enter the elements of the matrix: ");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int symmetric = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] != arr[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) {
            break;
        }
    }

    if(symmetric) {
        printf("The matrix is symmetric.");
    } 
    else {
        printf("The matrix is not symmetric.");
    }

    return 0;
}