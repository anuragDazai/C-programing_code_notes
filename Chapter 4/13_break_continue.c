// Topic: 'break' and 'continue' Statements in C
// Definition: Control flow keywords used to alter the natural looping behavior.
// 
// 1. 'break'    : "QUIT IMMEDIATELY" -> Stops the loop right away and jumps outside of it.
// 2. 'continue' : "SKIP THIS ROUND"  -> Skips the rest of the current round and jumps straight to the next iteration.

#include <stdio.h>

int main()
{
    // =============================================================
    // PART 1: The 'break' Statement (Emergency Exit)
    // =============================================================
    printf("--- Demo of break ---\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Found 5! Breaking out of the loop completely.\n");
            break; // The entire loop stops here! Numbers 5 through 10 will never print.
        }
        printf("Current i: %d\n", i);
    }
    // Output for break: 1, 2, 3, 4


    // =============================================================
    // PART 2: The 'continue' Statement (Skip / Pass)
    // =============================================================
    printf("\n--- Demo of continue ---\n");

    for (int i = 1; i <= 6; i++)
    {
        if (i == 3)
        {
            printf("Skipping number 3!\n");
            continue; // Skips the printf below for i = 3 and jumps straight to i++ for the next round!
        }
        printf("Current i: %d\n", i);
    }
    // Output for continue: 1, 2, (3 skipped), 4, 5, 6

    return 0;
}

// -------------------------------------------------------------
// Quick Mental Model:
// -------------------------------------------------------------
// - break    = "I'm totally done, get me out of this entire loop!"
// - continue = "Skip the rest of this one round, move to the next iteration!"