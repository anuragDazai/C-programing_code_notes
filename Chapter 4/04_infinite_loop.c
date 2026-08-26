// Topic: Infinite While Loops in C
// Definition: A loop whose test condition NEVER evaluates to False (0), causing it to run endlessly until forcefully stopped or broken out of.
// How C Evaluates Truth: In C, 0 is FALSE, and any non-zero number (like 1, -5, 100) is treated as TRUE.
// Exit Strategies: 1) Internal break statement, 2) return statement, 3) Process termination (Ctrl + C / exit()).

#include <stdio.h>

int main()
{
    // -------------------------------------------------------------
    // Pattern 1: Unintentional / Buggy Infinite Loop (Missing Update)
    // -------------------------------------------------------------
    /*
    int i = 0;
    while (i < 5) {
        printf("This runs forever because 'i' never changes from 0!\n");
        Forgot i++; -> (0 < 5) is ALWAYS TRUE!
    }
    */

    // -------------------------------------------------------------
    // Pattern 2: Explicit Infinite Loop with a Controlled Exit ('break')
    // -------------------------------------------------------------
    int count = 1;

    // Condition '1' is a non-zero constant, so the condition check is ALWAYS TRUE.
    while (1) 
    {
        printf("Iteration count: %d\n", count);

        // Break Condition: An internal check to manually escape the infinite loop
        if (count == 5) {
            printf("Break condition met! Terminating the infinite loop.\n");
            break; // Immediately terminates the loop and jumps to the code below
        }

        count++; // Update variable
    }

    printf("Execution resumed safely after the loop!\n");
    return 0;
}