// Menu Driven Array operations system

#include <stdio.h>

int main(){
    int n1, n2, i = 0, j = 0;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int key;

    do{
        printf("Menu Driven Array Operations System\n");
        printf("1. Array Union\n");
        printf("2. Array Intersection\n");
        printf("3. Merge Arrays\n");
        printf("4. Array Addition (Add corresponding elements)\n");
        printf("5. Array Subtraction (Subtract corresponding elements)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                array_union(arr1, n1, arr2, n2);
                break;
            case 2:
                array_intersection(arr1, n1, arr2, n2);
                break;
            case 3:
                merge_arrays(arr1, n1, arr2, n2);
                break;
            case 4:
                array_addition(arr1, n1, arr2, n2);
                break;
            case 5:
                array_subtraction(arr1, n1, arr2, n2);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 6);
}

int array_union(int arr1[], int n1, int arr2[], int n2) {
    printf("Array Union:\n");
    for(int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for(int j = 0; j < n2; j++) {
        int found = 0; 
        for(int i = 0; i < n1; i++) {
            if(arr2[j] == arr1[i]) {
                found = 1; 
                break;            
            }
        }
        if(found == 0) {
            printf("%d ", arr2[j]);
        }
    }
    
    printf("\n");
    return 0;
}

int array_intersection(int arr1[], int n1, int arr2[], int n2) {
    printf("Array Intersection:\n");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
            }
        }
    }
    return 0;
}

int merge_arrays(int arr1[], int n1, int arr2[], int n2) {
    printf("Merged Array:\n");
    for(int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

int array_addition(int arr1[], int n1, int arr2[], int n2) {
    printf("Array Addition:\n");
    for(int i = 0; i < n1 && i < n2; i++) {
        printf("%d ", arr1[i] + arr2[i]);
    }
    return 0;
}

int array_subtraction(int arr1[], int n1, int arr2[], int n2) {
    printf("Array Subtraction:\n");
    for(int i = 0; i < n1 && i < n2; i++) {
        printf("%d ", arr1[i] - arr2[i]);
    }
    return 0;
}