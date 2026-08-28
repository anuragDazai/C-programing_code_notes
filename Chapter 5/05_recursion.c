// recursion is a method where a function calls itself to solve itself, where a function solves a problem by calling itself with a smaller subproblem.

#include <stdio.h>

// Recursive Function
int factorial(int n)
{
    // 1. BASE CASE: Stops the recursion
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // 2. RECURSIVE CASE: Function calls itself with (n - 1)
    return n * factorial(n - 1);
}

int main(void)
{
    int result = factorial(25);
    printf("Factorial of 4 is: %d\n", result); // Output: 24
    return 0;
}


// factorial(4) -> waits for 4 * factorial(3)
//   factorial(3) -> waits for 3 * factorial(2)
//     factorial(2) -> waits for 2 * factorial(1)
//       factorial(1) -> hits Base Case! Returns 1