#include <stdio.h>
int main()
{
    printf("Hello\tWorld\n"); // \t is a tab space
    printf("Hello\bWorld\n"); // \b is a backspace
    printf("Hello\\World\n"); // \\ is a backslash
    printf("Hello\"World\"\n"); // \" is a double quote
    printf("Hello\'World\'\n"); // \' is a single quote
    printf("Hello\rWorld\n"); // \r is a carriage return
    printf("Hello\fWorld\n"); // \f is a form feed
    printf("Hello\vWorld\n"); // \v is a vertical tab
    return 0;
}