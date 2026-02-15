#include <stdio.h>

int main(){
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age <= 0){
        printf("Womp womp, lil bro!\n");
    }
    else if (age < 18){
        printf("Grow up kiddo!\n");
    }
    else if (age == 18){
        printf("Congratulations: you're 18. You can legally make terrible decisions all on your own. Enjoy.\n");
    }
    else if (age > 18 && age < 60){ 
        printf("You can drive!\n");
    }
    else {
        printf("Chill out grandpa!\n");
    }    
        
    return 0;
}