// Write a program to calculate the sum of the numbers occurring in the multiplication
// table of 8 (consider 8 × 1 to 8 x 10)

#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i*8;
    }
    printf("The sum of the multiplication table of 10 is: %d", sum);
    return 0;
}