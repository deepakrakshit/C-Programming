#include <stdio.h>

int main(){

    int i, sum=0;

    for(i=1; i<11; i++){
        
        sum += (i*8);
    }

    printf("%d", sum);

    return 0;
}