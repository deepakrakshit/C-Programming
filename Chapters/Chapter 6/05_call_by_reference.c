#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b) {
    *a = 6;
    return *a + *b;
}

int main() {

    int x = 5, y = 10;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
    printf("The value of x after function call is %d\n", x);
    
    return 0;
}