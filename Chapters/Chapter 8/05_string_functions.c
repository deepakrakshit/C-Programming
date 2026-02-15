#include <stdio.h>
#include <string.h>

int main() {
    
    char st[] = "Deepak";
    printf("%d\n", strlen(st));

    char a[] = "byee";
    char b[30];
    strcpy(b,a);
    printf("%s %s\n", a, b);

    char s1[56] = "Hello"; // no space on first string
    char s2[56] = " World";
    strcat(s1,s2);
    printf("%s\n", s1);

    int a1 = strcmp("far", "joke"); // Negative value
    int a2 = strcmp("joke", "far"); // Positive value
    printf("%d\n", a1);
    printf("%d", a2);

    return 0;
}