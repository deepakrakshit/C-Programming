/*Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.*/

#include <stdio.h>

struct complex {
    int real;
    int img;
};

void display(struct complex c[]) {
    for (int i = 0; i < 5; i++) {
        printf("Complex number %d: %d + %di\n", i+1, c[i].real, c[i].img);
    }
}

int main() {

    struct complex c[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter real part of complex number %d: ", i+1);
        scanf("%d", &c[i].real);

        printf("Enter imaginary part of complex number %d: ", i+1);
        scanf("%d", &c[i].img);
    }

    display(c);

    return 0;
}
