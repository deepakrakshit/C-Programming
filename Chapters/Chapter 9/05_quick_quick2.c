// Quick Quiz: Complete this show function to display the content of employee.

#include <stdio.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

void show(struct employee e){
    printf("Code: %d\n", e.code);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}

int main() {

    struct employee e1 = {15, "Deepak", 15000};
    show(e1);
    
    return 0;
}