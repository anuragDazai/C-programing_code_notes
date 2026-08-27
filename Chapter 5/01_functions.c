// =============================================================
// Topic: Function Prototype, Definition, and Call in C
// =============================================================
// Core Concepts:
// 1. Modularity & Organization: Breaks down complex logic into small, manageable units.
// 2. Code Reusability: Write logic once, invoke it infinite times with different inputs.
// 3. Execution Flow:
//    - main() runs -> reaches function call -> pauses main()
//    - Jumps to the function definition -> executes statements
//    - Returns value -> resumes main() right where it left off.
// =============================================================

#include <stdio.h>

// -------------------------------------------------------------
// 1. FUNCTION PROTOTYPE (Declaration)
// -------------------------------------------------------------
// Syntax: return_type function_name(parameter_types);
// Why? C compiles top-to-bottom. This acts as a forward announcement 
// so the compiler knows the function signature before main() calls it.
int sum(int x, int y); // x and y are paramenters


int main()
{
    int a = 10;
    int b = 20;

    // ---------------------------------------------------------
    // 2. FUNCTION CALL (Invocation)
    // ---------------------------------------------------------
    // - 'a' and 'b' are ACTUAL ARGUMENTS passed by value into the function.
    // - The expression 'sum(a, b)' resolves/collapses into the returned integer (30).
    // - The assignment operator stores that 30 directly into 'result'.
    int result = sum(a, b); 
    
    printf("The returned sum stored in main is: %d\n", result);

    // Reusing the same function with raw integer literals:
    // 'sum(50, 75)' collapses directly to 125
    int another_result = sum(50, 75); // these are arguments (50, 75)
    printf("Second sum is: %d\n", another_result);

    return 0;
}


// -------------------------------------------------------------
// 3. FUNCTION DEFINITION (Implementation / The Body)
// -------------------------------------------------------------
// Syntax: return_type function_name(type param1, type param2) { ... }
// - 'x' and 'y' are FORMAL PARAMETERS (copies of the passed values).
// - 'return': Sends the evaluated result back to the caller in main().
int sum(int x, int y)
{
    printf("Inside sum function: Adding %d + %d\n", x, y);
    
    // Evaluates (x + y) and hands that single value back to wherever sum() was called
    return x + y; 
}

// -------------------------------------------------------------
// Quick Mental Model:
// -------------------------------------------------------------
// Prototype  -> "Hey C, a function named sum() taking two ints is coming later."
// Call       -> "Pause main(), run sum(10, 20), and give me the answer."
// Definition -> "Here is the recipe: take two inputs, add them, and return."
// Return     -> 'int x = sum(59, 80);' collapses into 'int x = 139;'






        //      INPUT
        //        ↓
        // ┌──────────────┐
        // │   FUNCTION   │
        // │              │
        // │  does a task │
        // └──────┬───────┘
        //        ↓
        //      OUTPUT





// void hello() // void means it doesn't return any value, no return value or type.
// {
//     printf("Hello!");
// }

// void     hello     ()
//  │         │        │
//  │         │        └── parameters
//  │         └─────────── function name
//  └───────────────────── return type


/*
FUNCTION PROTOTYPE

A prototype tells the compiler about a function before
its actual definition appears.

int add(int a, int b);

Prototype → declaration only, no body.
Definition → actual function code.

C:
int add(int a, int b);   // Prototype

int main() {
    add(10, 20);         // Call
}

int add(int a, int b) { // Definition
    return a + b;
}

PYTHON:

def add(a, b):
    return a + b

add(10, 20)

COMPARISON:
Python → Definition → Call
C      → Prototype → Call → Definition
         (if definition is written later)

C can also be:
Definition → Call
(just like Python)
*/