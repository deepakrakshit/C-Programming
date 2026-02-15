#include <stdio.h>

    int main(){
        //  Write a program to check whether a number is divisible by 97 or not.

        int x;
        printf("Enter your Number: \n");
        scanf("%d", &x);

        printf("If your number is divisible by 97, the output will be 0, otherwise it will be non-divisible \n");
        printf("Output: %d\n", x%97);

        return 0;
    }