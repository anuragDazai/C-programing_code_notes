// Question: Write a program to print the address of a variable. Use this address to get the value of the variable.

#include <stdio.h>

int main(){
    int i = 234;
    int* j = &i; // & means address of the variable i. So we are storing the address of the variable i in j variable, and we use special data type called pointer to store the address of a variable. Pointer is a variable that stores the address of another variable.
    printf("the address of the variable i is :%p\n", j);
    printf("The value of the variable i is :%d\n", *j); // *j means value of the address stored in j variable.
    printf("The value of the variable i is :%d\n", (void*)j);

    // *j means
    // Go to the address stored in j and give me the value there.
    return 0;
}

// & → address
// * → value at that address
// (void*) → treat pointer as a generic address for %p