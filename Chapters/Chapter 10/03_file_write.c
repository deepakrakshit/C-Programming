#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("deepak.txt", "w"); // write mode phele poori file ko khali kr dega uske baad write krega to fix this we use append (a) mode, just replace w with a and it will nor erase the previous conent + it will create the file if its does not exists
    int num = 66;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}