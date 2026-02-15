// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
#include <stdio.h>

int printaddress(int* ptr) {
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}


int main() {
    
    int i = 10;
    int* ptr = &i;
    printf("The address of a is %u\n", &i);
    printaddress(ptr);

    return 0;
}