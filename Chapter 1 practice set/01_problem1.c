// 1. Write a C program to calculate the area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>

int main(){
    // int length = 22;
    //  int width = 10;
    // int area = length * width;
    // printf("Area of rectangle with hard coded inputs: %d\n", area);
    int lenght, width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &lenght, &width);
    int area = lenght * width;
    printf("Area of rectangle with user inputs: %d\n", area);
    return 0;
}