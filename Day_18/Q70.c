// Selection Sort

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
        int temp = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[temp]) {
                temp = j;
            }
        }
        int temp = arr[temp];
        arr[temp] = arr[i];
        arr[i] = temp;
    }
    printf("The sorted array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}