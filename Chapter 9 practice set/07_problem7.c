// Write problem 5's structure using typedef keywords

#include <stdio.h>
typedef struct complex{
    int real;
    int imag;
} Complex;

int main(){
    Complex c = {3, 4}; // Initialize the complex number with real and imaginary parts
    printf("Complex Number: %d + %di\n", c.real, c.imag);
    return 0;
}