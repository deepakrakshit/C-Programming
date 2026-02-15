// Write a program with a structure representing a complex number.

#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main() {

    struct complex c1 = {5, 6};
    printf("Real number is %d and Complex number is %di", c1.real, c1.img);
    
    return 0;
}