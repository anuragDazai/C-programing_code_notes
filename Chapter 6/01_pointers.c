// =============================================================
// Topic: Pointers in C — Basics, Syntax, and Address Resolution
// =============================================================
// Mental Model:
// - A regular variable (int a = 10;) is a HOUSE with the number 10 
//   sitting inside its living room. That house sits at a specific 
//   street address on your RAM (e.g., 0x7ffd5e01).
// - A pointer variable (int *ptr = &a;) is a NOTEPAD where you write 
//   down that address: "0x7ffd5e01".
// =============================================================
// Core Operators:
// 1. & (Address-of Operator) : Retrieves the exact RAM address of a variable.
// 2. * (Dereference Operator): Goes to the address stored inside the pointer
//                              and accesses/mutates the value inside the house.
// =============================================================

#include <stdio.h>

int main(void)
{
    // ---------------------------------------------------------
    // PART 1: Addressing and Pointer Type Corrections
    // ---------------------------------------------------------
    int i = 74;

    // ❌ WRONG  : int j = &i;   (Warning: assigning pointer address to a plain integer)
    // ✅ CORRECT: int *j = &i;  (j is declared as an integer pointer)
    int *j = &i;

    // Address of variable 'i' using Address-Of operator (&)
    printf("The memory location of 'i' is: %p\n", (void *)&i);

    // Address of 'i' retrieved by printing what is stored inside pointer 'j'
    printf("Memory location using the pointer 'j' (stores &i): %p\n\n", (void *)j);


    // ---------------------------------------------------------
    // PART 2: Pointer Resolution and Dereferencing
    // ---------------------------------------------------------
    int x = 10;
    int *p = &x; // 'p' stores the address of 'x'

    // Value of 'x' directly
    printf("Value of x directly               : %d\n", x);          // 10

    // Address of 'x' on RAM
    printf("Address of x (&x)                 : %p\n", (void *)&x);

    // Value stored inside pointer 'p' (same address as &x)
    printf("Value stored in pointer p (== &x) : %p\n", (void *)p);

    // Dereferencing 'p' (*p): goes to address in 'p' and fetches the value (x == *p)
    printf("Value fetched via dereference (*p): %d\n\n", *p);        // 10


    // ---------------------------------------------------------
    // PART 3: Mutating Memory Directly via Dereferencing
    // ---------------------------------------------------------
    *p = 99; // Changes the value in x's house to 99 via its notepad address

    printf("--- After executing *p = 99 ---\n");
    printf("New value of x: %d\n", x);   // 99
    printf("New value at *p: %d\n", *p); // 99

    return 0;
}

// -------------------------------------------------------------
// Quick Reference Cheat-Sheet:
// -------------------------------------------------------------
//  x     -> The variable value (10)
// &x     -> The memory address of x (e.g., 0x7ffeefbff568)
//  p     -> Pointer variable holding &x
// &p     -> The memory address of the pointer variable itself
// *p     -> Dereferences p to access x directly (*p is an alias for x)