// Program of Linear Search in an array

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
    int num;
    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            printf("%d found at index %d\n",num, i);
            return 0;
        }
    }
    printf("%d not found in the array", num);
    return 0;
}