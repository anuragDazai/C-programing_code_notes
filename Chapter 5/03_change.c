// Topic: Call by Value in C
// Core Intuition: C always passes COPIES of variables to functions, NEVER the original variable itself.
// Modifying a parameter inside a function only alters the local photocopy, leaving the original in main() untouched.

#include <stdio.h>

// Function prototype
void change(int a);

int main()
{
    int b = 22;

    printf("1. Value of 'b' before change(): %d\n", b);

    // CALL BY VALUE: We pass the value (22), not the memory location of 'b'
    change(b);

    // 'b' in main() is completely unchanged
    printf("3. Value of 'b' after change():  %d\n", b);

    return 0;
}

// Function definition
void change(int a) // 'a' is a brand-new local variable holding a COPY of 22
{
    a = 77; // Only overwrites the local copy 'a' inside change()
    printf("2. Value of 'a' inside change(): %d\n", a);
}


// ================ main() Stack Frame ================
//   [ b ] Memory Address: 0x1000 | Value: 22
//   --------------------------------------------------
//   Calling change(b) sends only the value (22) down...
// ====================================================
//                          │
//                          ▼ (Copy is passed)
// ================ change() Stack Frame ==============
//   [ a ] Memory Address: 0x2000 | Value: 22 -> changes to 77
//   --------------------------------------------------
//   Modifying 'a' at 0x2000 does NOT touch 'b' at 0x1000!
// ====================================================