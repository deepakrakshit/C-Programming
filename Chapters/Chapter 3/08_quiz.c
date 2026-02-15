// // Quick Quiz: Write a program to find grade of a student given his marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F




// METHOD 1
#include <stdio.h>

int main(){
    
    char grade;
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100){
        printf("Your grade is A\n");
    }
    else if (marks>=80 && marks<90){
        printf("Your grade is B\n");
    }
    else if (marks>=70 && marks<80){
        printf("Your grade is C\n");
    }    
    else if (marks>=60 && marks<70){
        printf("Your grade is D\n");
    }    
    else if (marks>=50 && marks<60){
        printf("Your grade is E\n");
    }    
    else if (marks<50){
        printf("Your grade is F\n");
    }    
    else{
        printf("Invalid marks entered\n");
    }    
    return 0;
}
