// Binary Search 

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
    printf("Enter the elements of the array in sorted order: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int strt = 0, end = n - 1, mid;
    while(strt <= end) {
        mid = (strt + end) / 2;
        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        } else if(arr[mid] < key) {
            strt = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    printf("Element not found in the array");
    return 0;
}