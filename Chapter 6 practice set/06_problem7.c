// Try problem 3 using call by value and verify that it does not change the value of the
// variable.


#include <stdio.h>

void multiplyByTen(int ptr)
{
    ptr = (ptr) * 10; 
}

int main(void)
{
    int num = 7;

    printf("Value before function call: %d\n", num);

    multiplyByTen(num); 

    printf("Value after function call:  %d\n", num); // we are giving only the copy of the variable not the address of the variable hence we cannot change the value of the variable in the main function

    return 0;
}