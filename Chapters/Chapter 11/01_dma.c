#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    // int arr[n];  // you cannot do this, to do this you need to use dynamic memory allocation

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
    }

    else{
    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Printing values
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // VERY IMPORTANT
    }

    return 0;
}