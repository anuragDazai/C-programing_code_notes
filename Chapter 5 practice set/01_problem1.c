// Write a program using function to find average of three numbers. 

#include <stdio.h>


float avg(int a, int b, int c);

int main(){
    float average = avg(1, 2, 3);
    printf("The average of three numbers are: %f", average);
    return 0;
}


float avg(int a, int b, int c){
    return (a +b+c)/3.0; // here to convert that into float we take 3.0 instead of 3.
}