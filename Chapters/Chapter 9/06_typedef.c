#include <stdio.h>
#include <string.h>

typedef struct employee{ // typedef is used to give the datatype an alias or an alternative name
    int code;
    char name[10];
    float salary;
} Emp; // here i gave Emp

int main() {

    // typedef struct employee Emp;
    // i can also declare it inside main if i don't wish to declare outside

    /*but with a rule:
    declared inside main(), it is valid only inside main()
    Declaring outside makes it global and reusable

    So best practice:
    📌 Declare typedef outside functions*/

    Emp e1; // same as struct employee e1;
    e1.code = 15;
    strcpy(e1.name,"Deepak");
    e1.salary = 150000;

    printf("Code: %d\n", e1.code);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}