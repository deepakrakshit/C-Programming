#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("deepak.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fclose(ptr); // its a good practice to close the file after opening it

    // MODES IN FILE
 /* "r" -> open for reading
    "rb" -> open for reading in binary
    "w" -> open for writing // If the file exists, the contents will be overwritten
    "wb" -> open for writing in binary
    "a" -> open for append // If the file does not exist, it will be created*/
    return 0;
}