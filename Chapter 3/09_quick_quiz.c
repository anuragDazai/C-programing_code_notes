#include <stdio.h>

int main(){
    char grade;
    int marks = 49;
    if(marks<=100 && marks>=90){ // any one of the block will evaluate that's why we use this and once evaluated it'll initilize the vlaue of the grade by following marks 
        grade = 'A';
    }
    else if(marks<90 && marks>=80){
        grade = 'B';
    }
    else if(marks<80 && marks>=70){
        grade = 'C';
    }
    else if(marks<70 && marks>=60){
        grade = 'D';
    }
    else if(marks<60 && marks>=50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }
    printf("Your grade is: %c\n", grade);
    return 0;
}