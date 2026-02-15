// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 5;
    float *ptr = (float *)malloc(n * sizeof(float));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
    }

    else{
        
        for (int i = 0; i < n; i++) {
            scanf("%f", &ptr[i]);
        }
        
        for (int i = 0; i < n; i++) {
            printf("%.1f ", ptr[i]);
        }

        free(ptr);
    }

return 0;
}