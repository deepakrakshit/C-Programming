// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main(){
    
    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);

    if (c >= 97 && c <= 122){
        printf("It is a lowercase letter");
    }
    else {
        printf("It is not a lowercase letter");
    }

    return 0;
}
