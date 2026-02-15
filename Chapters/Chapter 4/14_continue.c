#include <stdio.h>

int main(){
    int i;
    for(i=0; i<15; i++){

        if(i==5){
            continue; // break the iteration (skip this and move to next)
        }
        printf("%d\n",i);
    }

    printf("For Loop is done !!");

    return 0;
}