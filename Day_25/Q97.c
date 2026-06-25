// Program to merge two sorted arrays 

#include <stdio.h>

int main(){
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while(i < n1)
        merged[k++] = arr1[i++];

    while(j < n2)
        merged[k++] = arr2[j++];

    printf("Merged sorted array: ");
    for(i = 0; i < k; i++)
        printf("%d ", merged[i]);
    
    return 0;
}