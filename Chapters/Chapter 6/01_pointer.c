#include <stdio.h>

int main(){
    int a = 72;
    int* b = &a; // stores address of a in integer

    printf("The address of a is %p\n", &a); // prints the address of a

    printf("%d\n", b);
    printf("The address of a is %p\n", &b); // prints the address of b

    printf("The value of a is %d\n", *b); // prints the value of a 
    printf("The value of a is %d\n", *(&a)); // prints the value of a

    
    return 0;
}