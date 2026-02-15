// Quick Quiz: Write a program to create an array of size n using calloc where n is a integer entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int)); // difference between malloc and calloc is, malloc initially stores garbage values in the array while calloc stores 0 as the value in each elements of the array (initially)..

    if (ptr == NULL) {
    printf("Memory allocation failed\n");
    }

    else {
    for(int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }

    free(ptr);
    }
    return 0;
}