#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function Definition
int sum(int x, int y){
    printf("The Sum is %d\n", x+y);
    return x+y;
}
int main(){

    int a, b=2, c=3;
    
    sum(b,c); // Function Call
    sum(1,2);

    return 0;
}