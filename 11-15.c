#include <stdio.h>

int main() {
    // Variables for student data
    int studentID = 123456;
    int studentAge = 20;
    float studentFee = 1500.50;
    char studentGrade = 'A';


    // Display student data
    printf("Student ID: %d\n", studentID);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %.2f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);
    if (studentAge >= 18){
        printf("The student can vote\n");
    }
    else{
        printf("The student can't vote\n");
    }
    int time = 10;
    if (6<=time<=11){
        printf("Good morning!\n");
    }
    else if (12<=time <=18){
        printf("Good afernoon.\n");
    }
    else{
        printf("Good night.\n");
    }
    int weekdaynumber = 3;
    if (weekdaynumber ==1){
        printf("Monday\n");
    }
    else if (weekdaynumber == 2){
        printf("Tuesday\n");
    }
    else if (weekdaynumber == 3){
        printf("Wednesday\n");
    }
    else if (weekdaynumber == 4 ){
        printf("Thursday\n");
    }
    else if (weekdaynumber == 5){
        printf("Friday\n");
    }
    else if (weekdaynumber == 6){
        printf("Saturday\n");
    }
    else if (weekdaynumber == 7){
        printf("Sunday\n");
    }
    else{
        printf("Valid number\n");
    }
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
