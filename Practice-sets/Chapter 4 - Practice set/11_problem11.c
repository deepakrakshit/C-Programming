#include <stdio.h>

int main(){

    int i=2, n, not_prime=0;

    printf("Enter your number: ");
    scanf("%d", &n);

    while(i<n){
        if(n%i==0 && n!=2){
            not_prime = 1;
            break;
        }
        i++;
    }

    if(not_prime){
        printf("%d is not a prime number", n);
        }
    else{
        printf("%d is a prime number", n);
        }

        return 0;

    }