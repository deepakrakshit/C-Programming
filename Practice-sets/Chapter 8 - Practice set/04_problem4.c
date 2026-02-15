//Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>

void slice(char str[], int m, int n) {
    int i, j = 0;

    for (i = m; i <= n; i++) {
        str[j] = str[i];
        j++;
    }
    str[j] = '\0';  // terminate string
}

int main() {

    char str[] = "Hello World";
    slice(str, 6, 10);   // slice "World"
    printf("%s", str);

    return 0;
}
