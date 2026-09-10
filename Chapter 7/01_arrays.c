// An array in C is a contiguous block of memory holding elements of an identical data type.
// it holds multiple values of the same type, and each value can be accessed using an index. Arrays are useful for storing collections of data, such as lists of numbers or strings, but the data should be of same types.
// arrays store the elements in a contiguous block of memory, which means that the elements are stored in adjacent memory locations. This allows for efficient access to the elements using their index, as the memory address of each element can be calculated based on its position in the array.

#include <stdio.h>

int main(){
    int num[30]; // this says to the compiler that be ready to store 30 elements of integer type in the num variable acting as a array.
    num[0] = 30; // we are storing 30 in first index of the num array.
    num[1] = 60;
    // we can go from 0 to 89 elemetns in num array, because it already created a continious memory and saved it for the array elements for the 30 elements of integer type. So, we can store 30 elements in the num array.
    printf("The marks of the index 0: %d and 1: %d", num[0], num[1]);
    
    return 0;
}