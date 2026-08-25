#include <stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = a/b;
    printf("The divison of %d and %d is: %.2f",a,b,c ); // it will not give us 4.5 but 4.000 because both a and b are integers, so the result of the division will also be an integer. To get the correct result, we need to cast one of the operands to float before performing the division.
    // In C, int / int = int.
    // so after division it returns as 4 but as we assign it to a float variable, it will be stored as 4.000, ie c.
    // Even though c is a float, the decimal precision was already lost before the assignment took place.
    // To fix this, we can cast one of the operands to float before performing the division, like this:
    float d = (float)a/b; // Now, the division will be performed in floating point arithmetic, and the result will be 4.5.
    printf("\nThe divison of %d and %d is: %.2f",a,b,d );
    return 0;
}