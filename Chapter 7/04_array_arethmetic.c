// array arethmetic in C programming language is a way to perform operations on arrays, such as addition, subtraction, multiplication, and division. In C, arrays are treated as pointers, which means that when you perform arithmetic operations on arrays, you are actually performing operations on the memory addresses of the elements in the array.

#include <stdio.h>

int main()
{
    int a = 50;
    int *ptr = &a;
    printf("The value of a: %d\n", a);
    printf("The address of a: %d\n", &a);
    ptr++; // increases the pointer by the size in bytes of the data type it points to, which is 4 bytes for an integer on most systems. So, the pointer now points to the next memory location after a.
    printf("The value of a after incrementing the pointer: %d\n", *ptr);
    // similarly we can do substraction and other arethmetic operations on a pointer like
    ptr--;
    printf("The valur of a after decrement the pointer is: %d\n", *ptr);



    // what is the use of this ?
    // > pointer arithmetic lets you navigate arrays using memory addresses. It's useful in loops, strings, efficient data processing, and many C library functions.

    int arr[] = {10, 20, 30};
    int *ptr = arr; // Points to arr[0]

    printf("%d\n", *ptr); // 10

    ptr++;
    printf("%d\n", *ptr); // 20

    ptr++;
    printf("%d\n", *ptr); // 30
    return 0;
}

// ptr++ — move to the next element.

// ptr-- — move to the previous element.

// *ptr — access the value at the current address.