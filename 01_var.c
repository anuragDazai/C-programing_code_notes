#include <stdio.h>

int main(){
    int i = 10; // variables are the memory stored in the computer and the compiler saves the memory location with the variable name, so we can use that variable name to access the value stored in that memory location.
    int j = i;
    // %d is format specifier for integer values and it also works as a placeholder for the variable values, where we write %d we can get that variable value in the output, from left to right, the first %d will be replaced by the value of i and the second %d will be replaced by the value of j.  
    printf("The value of i is %d and value of j is %d", i, j);
    return 0;
}