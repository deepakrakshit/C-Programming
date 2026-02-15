// Create a two-dimensional vector using structures in C.

#include <stdio.h>

struct vector{
    int x;
    int y;
};

int main() {
    
    struct vector v;
    v.x = 1;
    v.y = 2;

    printf("The vector is %di + %dj", v.x, v.y);

    return 0;
}