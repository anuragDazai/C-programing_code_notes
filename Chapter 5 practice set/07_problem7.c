// =============================================================
// Program: Print Odd Star Pattern Using a Function
// Pattern for n = 3:
// Line 1 (i = 1): *       -> 1 star  [2(1) - 1]
// Line 2 (i = 2): ***     -> 3 stars [2(2) - 1]
// Line 3 (i = 3): *****   -> 5 stars [2(3) - 1]
// Formula for number of stars on line 'i': (2 * i - 1)
// =============================================================

#include <stdio.h>

// 1. Function Prototype
void printPattern(int n);

int main(void)
{
    int lines = 3;

    // 2. Function Call
    printPattern(lines);

    return 0;
}

// 3. Function Definition
void printPattern(int n)
{
    // Outer loop controls the current line (1 to n)
    for (int i = 1; i <= n; i++)
    {
        // Calculate the number of stars for the current row: 2*i - 1
        int stars = (2 * i) - 1;

        // Inner loop prints the exact number of stars for this row
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }

        // Move to the next line after completing the row
        printf("\n");
    }
}