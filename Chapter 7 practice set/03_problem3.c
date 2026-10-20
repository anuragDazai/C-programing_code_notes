// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main(){
    int arr[10]={}; // array would look likes {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}
    for(int i = 1; i<=10; i++){
        arr[i] = i*5; // adding the multiplication as array element as we proceed towards 50 from 5.
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", 5, i, arr[i]); // we displaying the whole array as it contains the multiplication table for 5.
    }
    
    return 0;
}