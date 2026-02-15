#include <stdio.h>

int main()
{
    int marks[] = {2, 4, 10, 7};

    // int *ptr = marks; // same as int *ptr = &marks[0]; (array name is pointer to first element)
    int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        // printf("The value of marks at index %d is %d\n", i, marks[i]);
        printf("The value of marks at index %d is %d\n", i, *ptr); // same as marks[i]
        ptr++;
    }
    return 0;
}