#include <stdio.h>

int main() {

    char str[50];
    // gets(str); //don't use this because its unsafe and may cause buffer overflow, use fgets instead
    fgets(str, 50, stdin);
    // printf("%s", str);
    puts(str); // Prints the string & places the cursor on the next line

    return 0;
}