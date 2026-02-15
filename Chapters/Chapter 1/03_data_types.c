#include<stdio.h>

int main()
{
    int a = 6; // int a; a = 6; // valid
    
    float b = 7.5; // float b; b = 7.5; // valid

    char c = 'D'; // char c; c = 'D'; // valid

    printf("The Output of this program is %d\n", a);
    printf("The Output of this program is %.2f\n", b);
    printf("The Output of this program is %c\n", c);
    return 0;
}