#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){

    int a, b, c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    printf("The Average of %d, %d and %d is %.2f\n", a, b, c, average(a, b, c));

    return 0;
}