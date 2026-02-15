#include <stdio.h>

int main() {
    FILE *ptr;

    ptr = fopen("deepakkk.txt", "a"); // deepakkk.txt does not exists, append will first create the file then store 66
    int num = 66;
    fprintf(ptr, "%d", num);
    fclose(ptr);

    ptr = fopen("deepak.txt", "a"); // this time deepak.txt exists and it already stores 3 integers, it will store the 4th integer 66 without deleting the previous ones..
    fprintf(ptr, " %d", num);
    fclose(ptr);

    return 0;
}