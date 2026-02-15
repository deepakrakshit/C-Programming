//  Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int positive(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            count++;
        }
    }
    return count;
}

int main() {

    int arr[] = {1, -21, -15, 88, -77, 7};
    printf("%d", positive(arr, 6));
    
    return 0;
}