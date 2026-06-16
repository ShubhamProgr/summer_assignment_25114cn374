// Program to find the maximum frequency element 

#include <stdio.h>

int main() {
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

    int max_count = 0, max_element = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }        
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    printf("The maximum frequency element is: %d\nCount: %d", max_element, max_count);

    return 0;
}