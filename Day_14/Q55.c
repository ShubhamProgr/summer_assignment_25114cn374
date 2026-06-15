// Program to find the second largest element in an array

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    while(n<2){
    printf("Please enter a size of 2 or greater: ");
    scanf("%d", &n);
    }
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest, second_largest;
    if (arr[0] > arr[1]) {
        largest=arr[0];
        second_largest=arr[1];
    } 
    else {
        largest=arr[1];
        second_largest=arr[0];
    }
    for(int i=2; i<n; i++){
        if(arr[i]>largest){
            second_largest=largest;  
            largest=arr[i];          
        }
        else if(arr[i] < largest && (arr[i] > second_largest || largest == second_largest)){
            second_largest=arr[i];   
        }
    }
    printf("The second largest element in the array is: %d", second_largest);
    return 0;
}