// 1. Character Array Declaration (Stack-allocated)
// You explicitly or implicitly create an array box in memory:

// C
// char str1[] = "Anurag"; // Size 7 (6 letters + '\0')
// Characteristics: The characters live on the stack, meaning you can modify individual letters (str1[0] = 'B';), but the array size is fixed.

// 2. Character Pointer Declaration (String Literals / Read-Only Memory)
// You can also use a char * pointer to point to a string literal:

// C
// char *str2 = "Anurag";
// Characteristics:

// Here, "Anurag" is stored in the read-only memory section of your compiled program.

// The pointer str2 simply holds the memory address of the letter 'A'.

// ⚠️ Danger: Because this string lives in read-only memory, trying to modify it later (like str2[0] = 'B';) will cause your program to crash with a Segmentation Fault.

#include <stdio.h>

int main()
{
    // --- 1. Character Array Declaration (Stack-allocated & Mutable) ---
    // This creates a modifiable array of size 7 (6 letters + '\0').
    char str1[] = "Anurag";

    printf("Before modification (str1): %s\n", str1);

    // We can safely modify individual characters because it lives on the stack.
    str1[0] = 'B';
    printf("After modifying str1[0] to 'B': %s\n", str1); // Output: Bnurag

    printf("\n----------------------------------------\n\n");

    // --- 2. Character Pointer Declaration (Read-Only Memory) ---
    // This pointer simply holds the memory address of a string literal.
    char *str2 = "Anurag";

    printf("Pointer string (str2): %s\n", str2);

    /*
     * ⚠️ DANGER / SEGMENTATION FAULT:
     * Uncommenting the line below will crash your program because
     * str2 points to read-only memory, which cannot be changed!
     *
     * str2[0] = 'B'; // Uncommenting this causes a Segmentation Fault
     */
    return 0;
}