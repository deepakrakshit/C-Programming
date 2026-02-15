// Write your own version of strcpy function from <string.h>

#include <stdio.h>

void copy(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0') {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
}

int main() {
    char str1[] = "Deepak", str2[30];
    copy(str1, str2);
    puts(str2);
    return 0;
}
