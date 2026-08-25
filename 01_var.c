#include <stdio.h>

int main(){
    int i = 10; // At its core, a variable is a human-friendly name mapped to a physical address in the computer's RAM. It gives you a way to store, track, and modify binary data without manually managing raw memory addresses.
    int j = i;
    // %d is format specifier for integer values and it also works as a placeholder for the variable values, where we write %d we can get that variable value in the output, from left to right, the first %d will be replaced by the value of i and the second %d will be replaced by the value of j.  
    printf("The value of i is %d and value of j is %d", i, j);
    return 0;
}