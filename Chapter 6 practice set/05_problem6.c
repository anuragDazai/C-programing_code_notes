// Write a program to print the value of a variable i  by using a pointer to pointer
// type variable.

#include <stdio.h>

int main(){
    int i = 10;
    int *ptr = &i; // pointer to i  
    int **ptr2 = &ptr; // pointer to pointer to i
    printf("The value of i is: %d\n", **ptr2); // so *ptr2 is the addrss of the pointer ptr and **ptr2 is the value of i
    return 0;
}