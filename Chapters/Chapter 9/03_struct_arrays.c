#include <stdio.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main() {
    
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    // and so on


    struct employee deepak = {50, "Deepak", 15000};
    printf("%d %s %f", deepak.code, deepak.name, deepak.salary);

    return 0;
}