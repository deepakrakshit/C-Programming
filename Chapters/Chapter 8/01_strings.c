#include <stdio.h>

int main() {
    
    char ch[] = {'a', 'b', 'c', '\0'};
    char a[] = "Deepak";

    for (int i = 0; i < 3; i++)
    {
        printf("%c", ch[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }
    
    return 0;
}