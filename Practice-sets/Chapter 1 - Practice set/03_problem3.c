#include <stdio.h>

int main(){
    
    float celcius;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);

    printf("Tempreture in farenheit is : %f\n", (celcius * 9/5) + 32);
    return 0;
}