// Program to find the largest and smallest element in an array 

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
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest, smallest;
    largest=arr[0];
    smallest=arr[0];
    for(int i=0; i<n; i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            if(arr[i]<smallest){
                smallest=arr[i];
            }
    }
    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d", smallest);
    return 0;
}