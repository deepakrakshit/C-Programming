// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main() {

    FILE *ptr;
    ptr = fopen("2.txt", "w");
    int num = 5;

    if(ptr == NULL){
        printf("The file does not exist!");
    } else {

        for(int i = 0; i<10; i++){
            fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
        }

        fclose(ptr);
    }

    return 0;
}