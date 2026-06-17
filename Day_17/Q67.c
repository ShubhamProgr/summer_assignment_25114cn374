// Program for intersection of arrays

#include <stdio.h>

int main(){
    int n1;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    while(n1 <= 0) {
        printf("Please enter a positive integer for the number of elements: ");
        scanf("%d", &n1);
    }

    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    while(n2 <= 0) {
        printf("Please enter a positive integer for the number of elements: ");
        scanf("%d", &n2);
    }

    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr3[n1];
    int k = 0;
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    printf("The intersection of the two arrays is: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}