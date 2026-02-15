#include <stdio.h>

float c2f(float Celsius);

float c2f(float Celsius){
    return (Celsius * (9.0/5.0)) + 32;
}

int main(){

    float celsius;
    printf("Enter Celsius: \n");
    scanf("%f", &celsius);

    printf(" %.2f\n", c2f(celsius));

    return 0;
}