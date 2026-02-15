// Try problem 3 using call by value and verify that it does not change the value of the said variable.

#include <stdio.h>

int change_to_ten_times(int);

int change_to_ten_times(int ptr) {
    ptr = (ptr) * 10;
    return 0;
}

int main() {

    int i = 5;
    printf("The value of i is %d\n", i);
    change_to_ten_times(i);
    printf("The value of i is %d\n", i);
    
    return 0;
}