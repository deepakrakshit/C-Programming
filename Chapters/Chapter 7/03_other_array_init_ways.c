#include <stdio.h>

int main() {
    
    float cgpa[5] = {7.8, 7.1, 8.5, 8.9, 9.2};
    int marks[] = {78, 71, 85, 89, 92}; // size is automatically determined by the compiler

    for(int i = 1; i <= 5; i++) {
        printf("The value of cgpa at index %d is %.1f\n", i, cgpa[i-1]);
    }

    for(int i = 1; i <= 5; i++) {
        printf("The value of marks at index %d is %d\n", i, marks[i-1]);
    }

    return 0;
}