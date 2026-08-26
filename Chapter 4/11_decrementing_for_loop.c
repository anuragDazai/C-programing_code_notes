// A Case of Decrementing For Loop using Truthy/Falsy values in C!
// In C language:
// - ANY non-zero number (5, 4, 3, 2, 1, -1) = TRUE (Keep looping)
// - Exactly 0 = FALSE (Stop the loop immediately!)
// So putting just 'i' in the condition slot means: "run as long as i is not 0".

#include <stdio.h>

int main()
{
    // Step 1: i starts at 5.
    // Step 2: checks condition 'i'. Since i = 5 (non-zero), it is TRUE!
    // Step 3: executes printf and prints the number.
    // Step 4: i-- subtracts 1 from i.
    // Step 5: repeats until i reaches 0 (0 is FALSE), and the loop stops!
    
    for (int i = 5; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

// -------------------------------------------------------------
// Step-by-step trace of what happens in memory:
// -------------------------------------------------------------
// Round 1: i = 5 -> Condition (5) is True  -> Prints 5 -> i becomes 4
// Round 2: i = 4 -> Condition (4) is True  -> Prints 4 -> i becomes 3
// Round 3: i = 3 -> Condition (3) is True  -> Prints 3 -> i becomes 2
// Round 4: i = 2 -> Condition (2) is True  -> Prints 2 -> i becomes 1
// Round 5: i = 1 -> Condition (1) is True  -> Prints 1 -> i becomes 0
// Round 6: i = 0 -> Condition (0) is FALSE -> LOOP STOPS! (0 is never printed)
//
// Output:
// 5
// 4
// 3
// 2
// 1