// Program to find the sum and average of an array 

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
    int sum=0;
    float avg;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    avg= (float)sum/n;
    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f", avg);
    return 0;
}