// What will the following line produce in a C program?
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);


// it'll print 4, 5, 4(and then add 1)

#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // In C, the order in which function arguments are evaluated is unspecified by the C standard, that's why the answer is different.
    // 6 6 4 (Most modern C compilers (like GCC and Clang on x86/x64) evaluate function arguments from right to left (<---) and push them onto the call stack.)
    // 4 5 5 both are correct depends upon the compiler that we're working on.
    return 0;
}