// so when we initialize an array, say if the element as 'int' then, int arr[3] = {2, 3, 4}. then during initilization not even during, allocation, during the initilization, the compiler will allocate memory for 3 integers in a contiguous block of memory, like say "2" is stored in 50000 memory location, so the compiler will allocate 50000, 50004, 50008 memory locations for the 2 integers. So, when we access the array elements, we are actually accessing the memory locations of the elements in the array, and then for "3" compiler will allocate the next 4 bits in the memory from the last allocated memory location, and for "4" compiler will allocate the next 4 bits in the memory from the last allocated memory location. So, when we access the array elements, we are actually accessing the memory locations of the elements in the array.
// An array stores elements of the same data type in contiguous memory locations.
// Example: int arr[3] = {2, 3, 4};
// If an int occupies 4 bytes and arr starts at address 50000:
// arr[0] -> 50000 (stores 2)
// arr[1] -> 50004 (stores 3)
// arr[2] -> 50008 (stores 4)
//
// Accessing arr[i] accesses the element at its calculated memory address.
// Note: Memory addresses are illustrative; actual addresses vary.

#include <stdio.h>

int main(){
    int arr[3] = {2, 3, 4};
    for(int i =0; i<3; i++){
        // Access the array element using pointer arithmetic.
        // arr[i] is equivalent to *(arr + i).
        int a = 
        printf("The address of %d is %d\n", arr[i], &arr[i]);
    }
    // similarly we can get the array elements using pointer arethmetic like a++, to get the next block after the arr[0] as we proceed.
    return 0;
}