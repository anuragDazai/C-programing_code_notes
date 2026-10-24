// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>
typedef struct complex{
    int real;
    int imag;
} Complex;

void displayComplex(Complex c) {
    printf("Complex Number: %d + %di\n", c.real, c.imag);
}

int main(){
    int j;
    printf("How many numbers you want to input: ");
    scanf("%d", &j);  
    Complex complexArray[j]; // we created 5 complex numbers in an array to store the values of 5 complex numbers.
    for(int i = 0; i < j; i++) {  // we run the loop 5 times to get the different a+ib values to full the array.
        printf("Enter real and imaginary parts for complex number %d: ", i + 1);
        scanf("%d %d", &complexArray[i].real, &complexArray[i].imag);
    }
    for (int i = 0; i < j; i++)
    {
        displayComplex(complexArray[i]); // we are calling the display function to display the values of complex numbers stored in the array.
    }
    
    return 0;
}