// Program to rotate array left

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
    int temp=arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("The rotated array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}