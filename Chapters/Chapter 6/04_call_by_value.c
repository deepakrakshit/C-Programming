#include <stdio.h>

int sum(int, int);

int sum(int a, int b) {
    a = 6; // sum cannot modify the original values
    return a + b;
}

int main() {

    int x = 5, y = 10;
    int result = sum(x, y); // Calling function by value
    printf("The sum of %d and %d is %d\n", x, y, result);
    
    return 0;
}