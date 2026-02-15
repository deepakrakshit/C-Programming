// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};

    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);

    return 0;
}
