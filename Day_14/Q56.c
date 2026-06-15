// Program to find duplicates in an array

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Please enter a positive number: ");
        scanf("%d", &n);
    }
    int arr[n];
    printf("Enter the elements of the array: ");
    while(n < 2){
    printf("Please enter a size of 2 or greater: ");
    scanf("%d", &n);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int duplicate_element;
    printf("The duplicate elements in the array are:\n");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                duplicate_element=arr[i];
                printf("%d is a duplicate element\n", duplicate_element);
                break;
            }
        }
    }
    
    return 0;
}