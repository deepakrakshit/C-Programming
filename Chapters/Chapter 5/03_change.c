#include <stdio.h>

// Function Prototype
int change(int a);

// Function Definition
int change(int a){
    a = 77; // misnomer

    return 0;

}
int main(){

    int b = 22;
    change(b); // The Value of b remains 22
    printf("%d\n", b);

}