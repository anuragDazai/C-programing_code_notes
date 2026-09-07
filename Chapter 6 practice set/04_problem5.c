// Question: Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

void multiplyByTen(int* ptr) // it takes the refrence of the variable as an argument, like the address of the variable
{
    *ptr = (*ptr) * 10; // so we passed a reference of the variable instead of the copy of the variable. and we passing the address of the variable to the function. so we can change the value of the variable in the function.
}
int main(void)
{
    int num = 7;

    printf("Value before function call: %d\n", num);

    // Passing address of 'num'
    multiplyByTen(&num); 

    printf("Value after function call:  %d\n", num); // 70

    return 0;
}