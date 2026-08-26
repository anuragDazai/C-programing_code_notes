// Write a program to calculate the factorial of a given number using a for  loop.

#include <stdio.h>

int main() {

    int num;
    int mul = 1;

    printf("Enter a number of which you want factorial: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        mul *= i;
    }

    printf("Factorial of %d = %d\n", num, mul);

    return 0;
}