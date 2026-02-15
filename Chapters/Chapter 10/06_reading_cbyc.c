#include <stdio.h>

int main() {
    FILE *ptr = fopen("char.txt", "r");
    int ch;

    while ((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(ptr);
    return 0;
}
