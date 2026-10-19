// array arethmetic in C programming language is a way to perform operations on arrays, such as addition, subtraction, multiplication, and division. In C, arrays are treated as pointers, which means that when you perform arithmetic operations on arrays, you are actually performing operations on the memory addresses of the elements in the array.

#include <stdio.h>

int main(){
    int a = 50;
    int *ptr = &a;
    printf("The value of a: %d\n", a);
    printf("The address of a: %d\n", &a);
    ptr++; // increases the pointer by the size in bytes of the data type it points to, which is 4 bytes for an integer on most systems. So, the pointer now points to the next memory location after a.
    printf("The value of a after incrementing the pointer: %d\n", *ptr);
    return 0;
}