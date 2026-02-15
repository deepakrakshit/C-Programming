#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    char name[10];
    float salary;
};

int main() {

    struct employee e1, e2;

    e1.code = 4155;
    /* e1.name = "Deepak";*/   //we can't do this
    strcpy(e1.name, "Deepak"); //this is the right way to do it
    e1.salary = 15000;

    printf("%d %s %.2f", e1.code, e1.name, e1.salary);
    
    return 0;
}