// Question: Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int* sum(int a, int b){
    int s = a +b;
    printf("Sum: %d\n", s);
    return &s; // we are returning the address of the local variable that is destroyed after the function ends, so as we return the address of the local variable it'll lead to undefined behavior when we try to access it in main(). This is a common mistake in C programming.
}

int* average(int a, int b){
    int avg =  (a + b) / 2.0;
    printf("Average: %.2f\n", avg);
    return &avg;
}   

int main(){
    int a = 20;
    int b = 30;
    int* ptr1;
    int* ptr2;

    ptr1 = sum(a, b);
    ptr2 = average(a, b);
    printf("The memory location of the sum is  %u and the average is %u", ptr1, ptr2);
    return 0;
}