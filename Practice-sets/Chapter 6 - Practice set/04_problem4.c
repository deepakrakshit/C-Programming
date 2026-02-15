// Write a function and pass the value by reference.

#include <stdio.h>

int pass_by_reference(int* ptr) {
    *ptr = 6;
    return 0;
}

int main() {

    int i = 5;
    int* ptr = &i;
    printf("The value of i is %d\n", i);
    pass_by_reference(ptr);
    printf("The value of i is %d\n", i);
    
    return 0;
}