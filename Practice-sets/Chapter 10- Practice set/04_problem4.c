/* Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700 */

#include <stdio.h>

typedef struct employee{
    char name[30];
    int salary;
}Emp;
int main() {

    Emp e1, e2;
    printf("Enter name of Employee 1:\n");
    scanf("%s", e1.name);
    printf("Enter salary of Employee 1:\n");
    scanf("%d", &e1.salary);
    printf("Enter name of Employee 2:\n");
    scanf("%s", e2.name);
    printf("Enter salary of Employee 2:\n");
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("4.txt", "w");

    if(ptr == NULL){
        printf("The file does not exist!"); // or we can use append instead of write so the file creation gets fixed if it does not already exists (but the question says write so we have to follow it)
    }

    fprintf(ptr, "i. %s, %d\nii. %s, %d\n", e1.name, e1.salary, e2.name, e2.salary);
    fclose(ptr);
    
    return 0;
}