#include <stdio.h>

int main(){
    int a = 1, b = 1, c = 0, d = 0;

    // Method 1

    printf("%d \n", a && b);
    printf("%d \n", a  || b);
    printf("%d \n", a && c);
    printf("%d \n", a || c);
    printf("%d \n", c && d);
    printf("%d \n", c || d);
    printf("%d \n", c && b);
    printf("%d \n", c || b);
    printf("%d: \n", !a);
    printf("%d: \n", !c);

    // Method 2

    if(a && b){
        printf("a && b is true \n");
    } else {
        printf("a && b is false \n");
    }


    // Method 3

    if (a){
        if (b){
            printf("a && b is true \n");
        } else {
            printf("a && b is false \n");
        }
    } else {
        printf("a && b is false \n");
    }



    return 0;
}