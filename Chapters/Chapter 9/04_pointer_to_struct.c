#include <stdio.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main() {

    struct employee e1;
    struct employee *ptr;

    e1.code = 15;
    ptr = &e1;

    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); // exactly same as above, its called star operator
    
    return 0;
}