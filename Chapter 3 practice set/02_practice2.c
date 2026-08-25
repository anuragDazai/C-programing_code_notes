// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from the user.

#include <stdio.h>

int main(){
    int subject1, subject2, subject3;
    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);
    if((subject1 >= 33) && (subject2 >= 33) && (subject3 >= 33) && ((subject1 + subject2 + subject3) / 3.0 >= 40)) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }
    
    return 0;
}