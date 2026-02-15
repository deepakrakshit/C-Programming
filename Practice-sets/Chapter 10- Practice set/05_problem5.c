// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main() {

    FILE *ptr;
    ptr = fopen("5.txt", "r");
    int num;

    if(ptr == NULL){
        printf("The file does not exist!");
    }

    else {

    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("5.txt", "w");
    num *= 2;

    fprintf(ptr, "%d", num);
    fclose(ptr);

    }

    return 0;
}