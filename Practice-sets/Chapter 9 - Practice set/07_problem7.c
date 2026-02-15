// Write problem 5’s structure using ‘typedef’ keywords.

#include <stdio.h>

typedef struct complex{
    int real;
    int img;
} Cmp;

int main() {

    Cmp c1 = {5, 6};
    printf("Real number is %d and Complex number is %di", c1.real, c1.img);
    
    return 0;
}