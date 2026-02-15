#include <stdio.h>

int main(){
    float pie = 3.14;
    float radius;
    float height;

    printf("Calculate the volume of cylinder\n");

    printf("Enter radius in cm: \n");
    scanf("%f", &radius);

    printf("Enter height in cm: \n");
    scanf("%f", &height);

    printf("Area of a circle is: %.2f cm^2\n", pie * radius * radius);
    printf("Volume of cylinder is: %.2f cm^3\n", pie * radius * radius * height);
    
    return 0;
}