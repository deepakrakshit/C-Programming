// QUICK QUIZ: Write a program to store the details of 3 employees from user defined data. Use the structure declared above.

#include <stdio.h>

struct employee {
    int code;
    char name[10];
    float salary;
};

int main() {

    struct employee e1, e2, e3;

    printf("Enter the code of Employee 1:\n");
    scanf("%d", &e1.code);
    printf("Enter the name of Employee 1:\n");
    scanf("%s", &e1.name);
    printf("Enter the salary of Employee 1:\n");
    scanf("%f", &e1.salary);
    printf("%d %s %.2f\n", e1.code, e1.name, e1.salary);

    printf("Enter the code of Employee 2:\n");
    scanf("%d", &e2.code);
    printf("Enter the name of Employee 2:\n");
    scanf("%s", &e2.name);
    printf("Enter the salary of Employee 2:\n");
    scanf("%f", &e2.salary);
    printf("%d %s %.2f\n", e2.code, e2.name, e2.salary);

    printf("Enter the code of Employee 3:\n");
    scanf("%d", &e3.code);
    printf("Enter the name of Employee 3:\n");
    scanf("%s", &e3.name);
    printf("Enter the salary of Employee 3:\n");
    scanf("%f", &e3.salary);
    printf("%d %s %.2f\n", e3.code, e3.name, e3.salary);
    
    return 0;
}