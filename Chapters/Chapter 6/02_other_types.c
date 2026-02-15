#include <stdio.h>

int main(){
    char a = 'A';
    char* b = &a; // stores address of a in character pointer

    float c = 3.14;
    float* d = &c; // stores address of c in float pointer

    printf("The address of a is %p\n", &a); // prints the address of a

    printf("%d\n", b);
    printf("The address of a is %p\n", &b); // prints the address of b

    printf("The value of a is %d\n", *b); // prints the value of a 
    printf("The value of a is %d\n", *(&a)); // prints the value of a

    
    return 0;
}