// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)  points to
// the third element where ptr  is a pointer pointing to the first element of the array.

#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *ptr = &arr[0];
    int *ptr = arr; // Points to arr[0], not the value.
    printf("The third element is %d at address: %u", *(ptr + 2), ptr+2); // it means we adding twice to the existing address of the first element of the array, so it will point to the third element of the array.
    return 0;
}