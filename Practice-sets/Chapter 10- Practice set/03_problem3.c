// Write a program to read a text file character by character and write its content twice in separate file.

#include <stdio.h>

int main()
{
    FILE *ptr, *ptr1;
    ptr = fopen("3.1.txt", "r");
    ptr1 = fopen("3.2.txt", "w");

    int ch;

    if (ptr == NULL || ptr1 == NULL)
    {
        printf("The file does not exist!");
    }

    else
    {

        while ((ch = fgetc(ptr)) != EOF)
        {
            fprintf(ptr1, "%c", ch);
        }

        rewind(ptr);
        fprintf(ptr1, "\n");

        while ((ch = fgetc(ptr)) != EOF)
        {
            fprintf(ptr1, "%c", ch);
        }

        fclose(ptr);
        fclose(ptr1);
    }
    return 0;
}