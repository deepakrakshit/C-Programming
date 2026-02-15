// Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
    }
    else {

        int *temp = (int *)realloc(ptr, 10 * sizeof(int));

        if (temp == NULL) {
            printf("Memory reallocation failed\n");
            free(ptr);
        }
        else {
            ptr = temp;
            free(ptr);
        }
    }

    return 0;
}