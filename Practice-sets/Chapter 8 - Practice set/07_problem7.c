// Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include <stdio.h>
#include <string.h>

void decrypt(char str[]){
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        str[i] -= 1;
    }   
}

int main() {

    char str[] = "Deepak";
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        str[i] += 1;
    }

    printf("%s\n", str);

    decrypt(str);
    printf("%s\n", str);

    return 0;
}