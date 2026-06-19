// Program to sort array in descending order

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    while(n <= 0) {
        printf("Please enter a positive integer for the number of elements: ");
        scanf("%d", &n);
    }
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array in descending order is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}