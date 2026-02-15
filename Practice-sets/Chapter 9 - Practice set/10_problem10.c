// Solve problem 9 for time using ‘typedef’ keyword.

#include <stdio.h>

typedef struct time{
    int hh;
    int mm;
    int ss;
} time;

void compare(time d1, time d2){
    if(d1.hh > d2.hh)
        printf("Time 1 is later");
    else if(d1.hh < d2.hh)
        printf("Time 2 is later");
    else if(d1.mm > d2.mm)
        printf("Time 1 is later");
    else if(d1.mm < d2.mm)
        printf("Time 2 is later");
    else if(d1.ss > d2.ss)
        printf("Time 1 is later");
    else if(d1.ss < d2.ss)
        printf("Time 2 is later");
    else
        printf("Both Times are same");
}

int main() {

    time d1 = {10, 57, 59};
    time d2 = {10, 57, 59};
    compare(d1,d2);
    return 0;
}