// 1. What will be the output of this program
// int a = 10;
// if (a = 11)
// printf("I am 11");
// else
// printf("I am not 11");

// Answer: I am 11 because in the if condition, a=11 is an assignment operation which assigns the value 11 to a and the expression evaluates to true (non-zero value).

#include <stdio.h>

int main()
{

    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

    return 0;
}