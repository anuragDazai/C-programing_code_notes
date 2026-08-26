// Used when the loop body must execute at least once, regardless of whether the initial condition is True or False.
// First do once, then check the condition! It guarantees the code runs at least 1 time before checking if it should repeat.
// Execution Flow: Run Body -> Check Condition -> If True: Repeat -> If False: Stop.
// Minimum Runs: 1 time (unlike while loop which can run 0 times).

#include <stdio.h>

int main()
{
    int i = 0;

    // 'do' says: "Just run this block right now, don't ask questions yet!"
    do 
    {
        printf("The value of i is %d\n", i);
        i++; // increase i by 1 each time
    } 
    while (i < 6); // Check condition AFTER running. Semicolon ';' is mandatory here!

    
    // -------------------------------------------------------------
    // What if the condition is already False? Let's check:
    // -------------------------------------------------------------
    int n = 50;

    do 
    {
        // Even though 50 is NOT less than 5, this will STILL print once!
        printf("\nI will run this 1 time even though n = %d is not < 5\n", n);
        n++;
    } 
    while (n < 5); // 51 < 5 is False, so it stops right after the first run.

    return 0;
}

// Quick syntax reminder:
// do {
//      // your code here
//      // increment / decrement
// } while (condition);  <-- do not forget this ';' at the end!