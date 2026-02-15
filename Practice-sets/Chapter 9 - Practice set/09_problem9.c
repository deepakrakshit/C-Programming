// Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

struct date{
    int dd;
    int mm;
    int yy;
};

void compare(struct date d1, struct date d2){
    if(d1.yy > d2.yy)
        printf("Date 1 is later");
    else if(d1.yy < d2.yy)
        printf("Date 2 is later");
    else if(d1.mm > d2.mm)
        printf("Date 1 is later");
    else if(d1.mm < d2.mm)
        printf("Date 2 is later");
    else if(d1.dd > d2.dd)
        printf("Date 1 is later");
    else if(d1.dd < d2.dd)
        printf("Date 2 is later");
    else
        printf("Both dates are same");
}

int main() {

    struct date d1 = {5, 6, 2007};
    struct date d2 = {5, 6 ,2007};
    compare(d1,d2);
    return 0;
}