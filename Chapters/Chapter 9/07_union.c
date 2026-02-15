#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 3.14;
    printf("f = %.2f\n", d.f);

    // i is now garbage
    printf("i again = %d\n", d.i); // i will give garbage value, because when we store d.f , d.i got cleared as all stores only 1 memory address, only 1 at a time

    return 0;
}
