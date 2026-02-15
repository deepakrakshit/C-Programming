#include <stdio.h>

int main(){
    
    int length, breadth;

    printf("Enter length in cm: ");
    scanf("%d", &length);

    printf("Enter Breadth in cm: ");
    scanf("%d", &breadth);


    printf("Area of rectangle is: %d cm^2\n", length * breadth);

    return 0;
}