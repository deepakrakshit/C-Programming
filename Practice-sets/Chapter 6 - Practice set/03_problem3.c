// Write a program to change the value of a variable to ten times of its current value.
#include <stdio.h>

int change_to_ten_times(int*);

int change_to_ten_times(int* ptr) {
    *ptr = (*ptr) * 10;
    return 0;
}

int main() {

    int i = 5;
    printf("The value of i is %d\n", i);
    change_to_ten_times(&i);
    printf("The value of i is %d\n", i);
    
    return 0;
}