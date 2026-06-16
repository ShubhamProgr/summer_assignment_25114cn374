// Program to find the missing number 

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
    printf("Enter the elements of the array (in sorted order): ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int a=arr[0],total_terms=n+1, d=1;  
    int exp_sum = (total_terms*((2*a)+(total_terms-1)*d))/2;
    int act_sum = 0;
    for(int i=0; i<n; i++){
        act_sum += arr[i];
    }
    int missingNumber = exp_sum - act_sum;
    printf("The missing number is: %d", missingNumber);
    
    return 0;
}