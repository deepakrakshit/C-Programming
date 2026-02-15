#include <stdio.h>

void calc(int a, int b, int *sum, float *avg) {
    *sum = a + b;          // store sum using pointer
    *avg = (a + b) / 2.0;  // store average using pointer
}

int main() {

    int num1 = 10, num2 = 20;
    int sum;
    float avg;

    // pass addresses so function can write into main's variables
    calc(num1, num2, &sum, &avg);

    // print in main()
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
