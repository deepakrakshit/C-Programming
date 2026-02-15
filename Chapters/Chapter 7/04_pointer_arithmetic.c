#include <stdio.h>

int main() {

    int a = 5;
    int *ptr = &a;

    printf("The value of a is %d\n", a);
    printf("The address of a is %u\n", &a);
    printf("The value of ptr is %u\n", ptr);
    printf("The value pointed to by ptr is %d\n", *ptr);

    ptr++;  // Incrementing the pointer (undefined behavior in this context)
    printf("After incrementing, the value of ptr is %u\n", ptr);


    // it works for all data types, int, float, double, char (it will increment by 1 byte for char, 4 bytes for int, 4 bytes for float, 8 bytes for double)
    
    return 0;
}