//Write a program using recursion to calculate nth  element of Fibonacci series.

#include <stdio.h>

int fibonacci(int n)
// 0  1  1  2  3  5  8 (sum of the number + n-1)
{
    if (n == 1|| n == 2){
        return n-1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 3;

    printf("The %dth Fibonacci element is %d", n, fibonacci(n));

    return 0;
}