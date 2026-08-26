// Used when you already know how many times you want the loop to run before starting.
// All loop controls (start, condition, step) are packed neatly inside one line!
// Execution Flow: 
// 1. Initialization (runs ONLY ONCE at the start)
// 2. Condition Check (if True -> run body; if False -> stop loop)
// 3. Run Loop Body
// 4. Update (increment/decrement the variable)
// 5. Repeat from Step 2!

#include <stdio.h>

int main()
{
    // for (where to start ; when to keep going(condition until true) ; how to change each time)
    for (int i = 1; i <= 5; i++)
    {
        // This body runs as long as (i <= 5) stays True
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

// -------------------------------------------------------------
// Quick Syntax Breakdown:
// -------------------------------------------------------------
// for (initialization; condition; update) {
//      // statements to repeat
// }
//
// 1. initialization -> Sets the starting point (e.g., int i = 1). Runs only once.
// 2. condition      -> Checked BEFORE every round. If true, body runs; if false, loop quits.
// 3. update         -> Changes the counter (e.g., i++ or i--) AFTER the body finishes each round.