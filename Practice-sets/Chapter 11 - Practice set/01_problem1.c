// Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
    }

    free(ptr);
    return 0;
}
