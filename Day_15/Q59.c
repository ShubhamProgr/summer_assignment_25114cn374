// Program to rotate array right

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
    int temp=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("The rotated array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}