// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main() {

    char c[100];
    char s[100];
    int i = 0;

    while (1) {
        scanf("%c", &c[i]);

        if (c[i] == '\n') {   // Enter key ends input
            c[i] = '\0';      // manually terminate string
            break;
        }
        i++;
    }

    scanf("%s", s);

    if(strcmp(c,s)==0){
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }

    
    return 0;
}