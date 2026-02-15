#include <stdio.h>

int main() {

    FILE *ptr;
    ptr = fopen("char.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    fclose(ptr);

    ptr = fopen("char.txt", "a"); // using w will remove the old content, so using append is good until and unless you want to overwrite
    fputc('C', ptr);
    fclose(ptr);

    return 0;
}