#include <stdio.h>

float force(float m);

float force(float m){ 
    return m*9.8;
}

int main(){

    float m;
    printf("Enter Mass: ");
    scanf("%f", &m);

    printf("The Force exerted is %.2f", force(m));

    return 0;
}