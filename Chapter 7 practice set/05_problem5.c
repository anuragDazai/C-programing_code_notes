// Write a program containing a function which reverses the array passed to it.


#include <stdio.h>

void reverse(int arr[], int size);
void printArray(int arr[], int size);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);
    printArray(arr, size);

    return 0;
}

void reverse(int arr[], int size) { // so we swapping the first number with the last number from the same array and put the existing number that we changing to a temp variable.
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], i < size - 1 ? ", " : "\n");
    }
}


// formatted via AI
