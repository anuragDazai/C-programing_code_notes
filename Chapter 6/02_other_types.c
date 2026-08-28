// =============================================================
// Topic: Pointers Across Different Data Types in C
// =============================================================
// Key Takeaways:
// 1. ALL pointers on a 64-bit machine occupy the EXACT same size (8 bytes),
//    because a memory address is just a number of fixed bit-width.
// 2. The data type (int*, char*, float*, double*) tells the compiler
//    HOW MANY BYTES to read/write when dereferencing with '*'.
// 3. Pointer-to-Pointer (int**): A pointer storing the address of another pointer.
// =============================================================

#include <stdio.h>

int main(void)
{
    // ---------------------------------------------------------
    // 1. CHARACTER POINTER (char*) -> Reads/Writes 1 byte
    // ---------------------------------------------------------
    char ch = 'A';
    char *cptr = &ch;

    printf("--- CHAR POINTER ---\n");
    printf("Value of ch        : %c\n", ch);
    printf("Address of ch (&ch): %p\n", (void *)&ch);
    printf("Value via *cptr    : %c\n", *cptr);
    *cptr = 'Z'; // Mutating char via pointer
    printf("New value of ch    : %c\n\n", ch);


    // ---------------------------------------------------------
    // 2. INTEGER POINTER (int*) -> Reads/Writes 4 bytes
    // ---------------------------------------------------------
    int num = 42;
    int *iptr = &num;

    printf("--- INT POINTER ---\n");
    printf("Value of num        : %d\n", num);
    printf("Address of num (&num): %p\n", (void *)&num);
    printf("Value via *iptr     : %d\n", *iptr);
    *iptr = 100;
    printf("New value of num    : %d\n\n", num);


    // ---------------------------------------------------------
    // 3. FLOAT & DOUBLE POINTERS -> Reads/Writes 4 & 8 bytes
    // ---------------------------------------------------------
    float pi = 3.14f;
    float *fptr = &pi;

    double precise_pi = 3.141592653589793;
    double *dptr = &precise_pi;

    printf("--- FLOAT & DOUBLE POINTERS ---\n");
    printf("Float via *fptr     : %.2f\n", *fptr);
    printf("Double via *dptr    : %.15lf\n\n", *dptr);


    // ---------------------------------------------------------
    // 4. POINTER TO POINTER (Double Pointer: int**)
    // ---------------------------------------------------------
    // Storing the address of another pointer variable
    int val = 500;
    int *ptr1 = &val;    // Level 1: Points to 'val'
    int **ptr2 = &ptr1;  // Level 2: Points to 'ptr1'

    printf("--- DOUBLE POINTER (int**) ---\n");
    printf("Value of val directly     : %d\n", val);
    printf("Value via *ptr1 (1 hop)   : %d\n", *ptr1);
    printf("Value via **ptr2 (2 hops) : %d\n", **ptr2);
    printf("Address of val            : %p\n", (void *)&val);
    printf("Address inside ptr1       : %p\n", (void *)ptr1);
    printf("Address of ptr1 itself    : %p\n", (void *)&ptr1);
    printf("Address inside ptr2       : %p\n\n", (void *)ptr2);


    // ---------------------------------------------------------
    // 5. MEMORY SIZES: Variable vs Pointer Size
    // ---------------------------------------------------------
    printf("--- MEMORY SIZES (on your architecture) ---\n");
    printf("Size of char:   %zu byte(s) | Size of char*:   %zu bytes\n", sizeof(ch), sizeof(cptr));
    printf("Size of int:    %zu byte(s) | Size of int*:    %zu bytes\n", sizeof(num), sizeof(iptr));
    printf("Size of float:  %zu byte(s) | Size of float*:  %zu bytes\n", sizeof(pi), sizeof(fptr));
    printf("Size of double: %zu byte(s) | Size of double*: %zu bytes\n", sizeof(precise_pi), sizeof(dptr));
    printf("Size of int**:  %zu bytes\n", sizeof(ptr2));

    return 0;
}