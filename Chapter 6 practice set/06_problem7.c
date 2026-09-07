// Try problem 3 using call by value and verify that it does not change the value of the
// variable.


#include <stdio.h>

void multiplyByTen(int* ptr)
{
    *ptr = (*ptr) * 10; 
}

int main(void)
{
    int num = 7;

    printf("Value before function call: %d\n", num);

    multiplyByTen(&num); 

    printf("Value after function call:  %d\n", num); 

    return 0;
}