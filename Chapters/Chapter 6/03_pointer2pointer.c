#include <stdio.h>

int main() {
    
    int i = 6;
    int* j = &i;
    int** k = &j;


    printf("The value of i is %d\n", *(&i)); // prints the value of i
    printf("The value of i is %d\n", *j); // prints the value of i
    printf("The value of i is %d\n", **(&j)); // prints the value of i
    printf("The value of i is %d\n", **k); // prints the value of i


    return 0;
}