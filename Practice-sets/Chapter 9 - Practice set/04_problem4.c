// Write a program to illustrate the use of arrow operator → in C.

#include <stdio.h>

struct employee{

    int code;
    char name[30];
    float salary;
};

int main() {

    struct employee e1 = {15, "Deepak", 150000};
    struct employee *ptr = &e1;

    // Access structure members using arrow operator
    printf("Employee Code: %d\n", ptr->code);      // same as (*ptr).code
    printf("Employee Name: %s\n", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);
    
    return 0;
}