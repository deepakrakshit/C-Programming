// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.


#include <stdio.h>

int main(){

    int subject1, subject2, subject3;

    printf("Enter marks of first subject : ");
    scanf("%d", &subject1);
    printf("Enter marks of second subject : ");
    scanf("%d", &subject2);
    printf("Enter marks of third subject : ");
    scanf("%d", &subject3);

    printf("You have entered %d, %d and %d marks in three subjects.\n", subject1, subject2, subject3);

    float total = (subject1 + subject2 + subject3)/3.0;

    if (total >=40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33){
        printf("Congratulations! You have passed the exam.");
    }
    else{
        printf("Sorry! You have not passed the exam.");
    }

    return 0;
}