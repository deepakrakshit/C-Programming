// Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.

#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("deepakk.txt", "r");

    if (ptr == NULL){
        printf("The file does not exist!");
    }
    else{
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        fclose(ptr);
    }

    return 0;
}