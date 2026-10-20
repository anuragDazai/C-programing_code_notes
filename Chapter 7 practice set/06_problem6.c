// Write a program containing functions which counts the number of positive integers in an array

#include <stdio.h>

int count_positive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main(){
    int arr[10] = {1, 2, 3, 4, -5, 6, 7, -8, 9, 10};
    int num = count_positive(arr, 10);
    printf("The Number of positive number is : %d", num);
    return 0;
}