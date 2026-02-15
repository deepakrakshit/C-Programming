#include <stdio.h>

int main(){

    int i=1, n= 10, factorial=1;

    while(i<=n){
        factorial *= i;
        i++;
    }

    printf("%d", factorial);

    return 0;
}