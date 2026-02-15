// Write a program to read three integers from a file

#include <stdio.h>

int main() {

    FILE *ptr;
    ptr = fopen("1.txt", "r");
    int num;

    if(ptr == NULL){
        printf("The file does not exist!");
    }
    else{
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