// Write your own version of strlen function from <string.h>

#include <stdio.h>

int length(char str[]){
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }

    return count;
}

int main() {

    char str[] = "Hello World";
    
    printf("length = %d", length(str));
    
    return 0;
}