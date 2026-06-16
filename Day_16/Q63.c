// Program to find pair with given sum 

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
    int sum;
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int found = 0;

    printf("Target Sum: %d\n", sum);
    for (int i = 0; i < n; i++) {        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1; 
                break;
            }
        }        
        if (found == 1) {
            break; 
        }
    }
    if (found == 0) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}