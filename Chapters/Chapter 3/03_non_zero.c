#include <stdio.h>

int main(){
    
    if (2345){
        printf("This will also always print because 2345 is non-zero\n");
    }

    if ('c'){
        printf("This will also always print because 'c' is non-zero\n");
    }

    if (-2345){
        printf("This will also always print because -2345 is non-zero\n");
    }

    if (3.14){
        printf("This will also always print because 3.14 is non-zero\n");
    }

    if (0.00001){
        printf("This will also always print because 0.00001 is non-zero\n");
    }

    if (0){
        printf("This will never print because 0 is zero\n");
    }


    return 0;
}