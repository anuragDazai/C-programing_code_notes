// Topic: Factorial of a Number using a While Loop
// What is Factorial? Multiplying all positive integers down to 1.
// Example: Factorial of 5 (5!) = 5 * 4 * 3 * 2 * 1 = 120
// Execution Flow: Start with product = 1 -> Multiply by 'i' each round -> Increment 'i' until 'num' is reached.

#include <stdio.h>

int main()
{
    int num;
    int mul = 1; // Start at 1 (NOT 0, because anything * 0 becomes 0!)
    
    // Step 1: Get the target number from the user
    printf("Enter a number of which you want factorial: ");
    scanf("%d", &num);

    int i = 1; // Counter starts at 1
    
    // Step 2: Loop from 1 up to 'num'
    while (i <= num)
    {
        mul *= i; // Compound assignment: same as mul = mul * i
        i++;      // Move to the next number
    }

    // Step 3: Print the final accumulated result
    printf("Factorial of %d = %d\n", num, mul);

    return 0;
}

// -------------------------------------------------------------
// Dry Run Trace (If user enters num = 4):
// -------------------------------------------------------------
// Initial: mul = 1, i = 1
// Round 1: mul = 1 * 1 = 1  -> i becomes 2
// Round 2: mul = 1 * 2 = 2  -> i becomes 3
// Round 3: mul = 2 * 3 = 6  -> i becomes 4
// Round 4: mul = 6 * 4 = 24 -> i becomes 5
// Round 5: (5 <= 4) is FALSE -> Loop stops!
// Final Output: Factorial of 4 = 24