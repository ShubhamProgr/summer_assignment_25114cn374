// Program to Reverse an array 

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
    printf("The reversed array is:\n");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    
    return 0;
}