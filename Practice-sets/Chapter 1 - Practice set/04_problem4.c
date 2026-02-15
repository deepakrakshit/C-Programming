#include <stdio.h>

int main(){
    
    float P , R , T;
    printf("Enter Principle amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Time in years: ");
    scanf("%f", &T);

    printf("Simple Interest is: %f\n", (P * R * T) / 100);

    return 0;
}