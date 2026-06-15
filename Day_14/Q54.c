// Program to count the frequency of a element in an array

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
    int count=0, num;
    printf("Enter the number to be counted: ");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("Frequency of %d is %d", num, count);
    return 0;
}