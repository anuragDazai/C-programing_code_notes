// Topic: While Loop Iteration Bounds (Zero-Based Indexing & Termination)
// Concept: Pre-test evaluation boundary condition (Strict Inequality '<' vs '<=').
// Key Rule: In a 0-indexed loop with (i < N), the loop body runs exactly N times (values: 0 to N-1).
// Execution Flow: i starts at 0 -> prints 0 to 9 -> at i=10, condition (10 < 10) evaluates to False (0) -> terminates immediately before entering the body.

#include <stdio.h>

int main()
{
    // Step 1: Initialization — Start the control variable at index 0.
    int i = 0;

    // Step 2: Entry-Condition Check — Evaluated BEFORE every iteration.
    // Iteration trace:
    // i = 0 -> (0 < 10) is TRUE  -> Prints 0 -> i becomes 1
    // ...
    // i = 9 -> (9 < 10) is TRUE  -> Prints 9 -> i becomes 10
    // i = 10 -> (10 < 10) is FALSE (0) -> Loop terminates immediately! Body does NOT run for 10.
    while (i < 10)
    {
        // Step 3: Loop Body — Executes only when condition is strictly TRUE (1).
        printf("the value of i is %d\n", i);

        // Step 4: Post-Increment — Increases value by 1 (shorthand for i = i + 1).
        i++;
    }

    // Post-Loop State: At this line, the value of i in memory is exactly 10.
    return 0;
}