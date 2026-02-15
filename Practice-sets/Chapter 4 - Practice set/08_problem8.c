#include <stdio.h>

int main(){

    int i, n= 10, factorial=1;

    for(i=1; i<=n; i++){
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}