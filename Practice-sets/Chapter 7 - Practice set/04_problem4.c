// Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{

    int table[10];

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
        printf("%d X %d = %d\n", n, i+1, table[i]);
    }

    return 0;
}