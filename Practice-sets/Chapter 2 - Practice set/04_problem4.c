#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 using comments.
    int x=2, y=3, z=3, k=1;
    // Step 1: 3*x = 3*2 = 6
    // Step 2: 6/y = 6/3 = 2
    // Step 3: 2 - z = 2 - 3 = -1
    // Step 4: -1 + k = -1 + 1 = 0
    printf("The final result of the expression 3*x/y - z + k is: %d\n", 3*x/y - z + k);

    return 0;
}