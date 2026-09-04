// Question: Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses the same? Why? - no because one is the copy of the original variable and the other is the original variable.

#include <stdio.h>

void printAddress(int ptr){

    printf("The address of the variable i inside the function is :%p\n", &ptr); // outside of the main function we are printing the copy of the i variable address. So the address of the variable i inside the function is different from the address of the variable i in main function.
}

int main(){
    int i = 34;
    printf("The address of the variable i in main is :%p\n", &i); // this is the original address of the variable i in main function.
    printAddress(i);
    return 0;
}