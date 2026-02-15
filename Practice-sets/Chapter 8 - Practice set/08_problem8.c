// Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Deepak";
    char ch = 'e';

    int len = strlen(str);
    int count = 0;

    for(int i = 0; i < len; i++){
        if(str[i] == ch){
            count++;
        }
    }

    printf("%d", count);
    
    return 0;
}