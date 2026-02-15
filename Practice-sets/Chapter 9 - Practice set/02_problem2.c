// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.

#include <stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main() {

    struct vector v1 = {1,2};
    struct vector v2 = {3,4};

    struct vector sum = sumVector(v1, v2);
    printf("Sum: %di + %dj", sum.x, sum.y);

    return 0;
}
