// Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Deepak";
    char ch = 'e';
    int found = 0;

    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == ch){
            found++;
            break;
        }
    }

    if(found){
        printf("%c is present in %s", ch, str);
    } else {
        printf("%c is not present in %s", ch, str);
    }

    return 0;
}