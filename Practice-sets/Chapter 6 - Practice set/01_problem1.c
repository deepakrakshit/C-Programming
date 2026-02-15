/* Write a program to print the address of a variable. Use this address to get the value of the variable. */

#include <stdio.h>

int main() {
    int a = 6;
    int* b = &a;

    printf("The address of a is %d\n", b);
    printf("The value of a is %d\n", *b);
    return 0;
}
