//Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failed\n");
    }

    else {
        for(int i = 0; i < n; i++){
            ptr[i] = 7*(i+1);
        }

        int m = 15;
        int *ptr1;
        ptr1 = (int *)realloc(ptr, m * sizeof(int));

        if(ptr1 == NULL){
        printf("Memory allocation failed\n");
        free(ptr);
        }

        else{

            ptr = ptr1;

            for(int i = 0; i < m; i++){
            ptr[i] = 7*(i+1);
            }
            for(int i = 0; i < m; i++){
            printf("7 X %d = %d\n", i+1, ptr[i]);
            }

            free(ptr);
        }
    }
    
    return 0;
}