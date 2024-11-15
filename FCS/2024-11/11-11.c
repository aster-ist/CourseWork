#include <stdio.h>

int main() {
    // Variables for student data
    int studentID = 12345;
    int studentAge = 20;
    float studentFee = 1500.50;
    char studentGrade = 'A';

    // Display student data
    printf("Student ID: %d\n", studentID);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %.2f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);

    // Check if old enough to vote
    if (studentAge >= 18) {
        printf("The student is old enough to vote.\n");
    } else {
        printf("The student is not old enough to vote.\n");
    }

    // Use if-else to output text based on time
    int hour = 14; // Example hour (2 PM)
    if (hour < 12) {
        printf("Good morning!\n");
    } else if (hour < 18) {
        printf("Good afternoon!\n");
    } else {
        printf("Good evening!\n");
    }

    // Calculate and output the weekday name
    int weekdayNumber = 3; // Example: 3 for Wednesday
    const char* weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    if (weekdayNumber >= 0 && weekdayNumber < 7) {
        printf("The weekday is: %s\n", weekdays[weekdayNumber]);
    } else {
        printf("Invalid day number\n");
    }

    // Print even values between 0 and 10 using a for loop
    printf("Even numbers between 0 and 10:\n");
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
