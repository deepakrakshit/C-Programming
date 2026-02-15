#include <stdio.h>

int main(){

    // USING DO WHILE LOOP

    int i=1, j=0;

    do {
        j +=i;
        i++;
    } while(i<11);

    printf("%d\n", j);

    // USING FOR LOOP

    int x, y=0;

    for(x=1; x<11; x++){
        y += x;
    }

    printf("%d", y);

    return 0;
}