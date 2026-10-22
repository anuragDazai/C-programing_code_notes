/* =============================================================================
 * STRUCTURES (struct) IN C: CORE CONCEPT
 * =============================================================================
 * An array is a collection of elements of the SAME data type (homogeneous).
 * A structure is a user-defined blueprint that groups variables of DIFFERENT 
 * data types (heterogeneous) under one identifier.
 * 
 * Each distinct piece of data inside a structure is referred to as a "member" 
 * or "field".
 * ============================================================================= */

#include <stdio.h>
#include <string.h> // Required for strcpy() string manipulation

/* -----------------------------------------------------------------------------
 * 1. DEFINING THE BLUEPRINT (TYPE DEFINITION)
 * -----------------------------------------------------------------------------
 * Defining a struct creates a new data type layout, NOT actual variables.
 * No memory is allocated by the compiler at this stage.
 * 
 * Placing this definition outside main() gives it 'file scope' (global visibility),
 * allowing any function in this file to declare and use 'struct Student' objects.
 */
struct Student {
    int id;          // 4 bytes: holds numeric student identification
    char name[50];   // 50 bytes: contiguous buffer for null-terminated text
    float marks;     // 4 bytes: holds single-precision decimal scores
}; // <-- CRITICAL: The trailing semicolon is mandatory syntax in C.
   // It tells the compiler the type declaration statement has concluded.

int main() {
    /* -------------------------------------------------------------------------
     * 2. VARIABLE DECLARATION & MEMORY ALLOCATION
     * -------------------------------------------------------------------------
     * Memory is now physically allocated on the stack frame of main().
     * Each variable gets its own independent block containing all three fields:
     * - student1 gets its own id, name[50], and marks.
     * - student2 gets its own separate id, name[50], and marks.
     * Note: Total memory size will be at least 4 + 50 + 4 = 58 bytes, 
     * plus internal/trailing structure padding bytes added by the compiler 
     * to satisfy memory alignment requirements.
     */
    struct Student student1, student2;

    /* -------------------------------------------------------------------------
     * 3. POPULATING student1 VIA MEMBER ACCESS (DOT OPERATOR '.')
     * -------------------------------------------------------------------------
     * The dot operator '.' evaluates memory offsets:
     * - 'student1.id' tells the CPU: "Start at base address of student1 + 0 bytes"
     * - Direct assignment '=' works natively for scalar types like int and float.
     */
    student1.id = 1;
    student1.marks = 85.5f;

    /*
     * WHY DIRECT STRING ASSIGNMENT FAILS IN C:
     * ----------------------------------------
     * Code like: student1.name = "John Doe"; -> COMPILATION ERROR!
     * 
     * Reason: In C, an array identifier ('name') decays into a non-modifiable 
     * pointer value (a constant address pointing to &student1.name[0]). 
     * You cannot assign a new address to an array name. 
     * 
     * Solution: We use strcpy(destination, source) to copy individual byte values 
     * from the string literal in read-only data memory into student1's stack buffer, 
     * finishing with the mandatory null-terminator '\0'.
     */
    strcpy(student1.name, "John Doe");

    /* -------------------------------------------------------------------------
     * 4. DISPLAYING student1
     * -------------------------------------------------------------------------
     * Each member is read by name.
     * 'student1.name' passes the address of the first character to %s, 
     * which prints until it hits '\0'.
     */
    printf("--- Student 1 Details ---\n");
    printf("Student ID    : %d\n", student1.id);
    printf("Student Name  : %s\n", student1.name);
    printf("Student Marks : %.2f\n\n", student1.marks);

    /* -------------------------------------------------------------------------
     * 5. POPULATING student2
     * -------------------------------------------------------------------------
     * Even though student2 shares the 'struct Student' blueprint, changing its
     * fields has zero effect on student1's data. They occupy distinct memory.
     */
    student2.id = 2;
    student2.marks = 90.0f;
    strcpy(student2.name, "Jane Smith");

    /* -------------------------------------------------------------------------
     * 6. DISPLAYING student2
     * -------------------------------------------------------------------------
     */
    printf("--- Student 2 Details ---\n");
    printf("Student ID    : %d\n", student2.id);
    printf("Student Name  : %s\n", student2.name);
    printf("Student Marks : %.2f\n", student2.marks);

    /*
     * ALTERNATIVE INITIALIZATION NOTE:
     * If assigning values at declaration time, C allows inline initialization:
     *   struct Student student3 = {3, "Alice Brown", 95.0f};
     * In this case, C handles initializing the character array directly,
     * so strcpy() is not required.
     */

    return 0; // Signals successful execution to the operating system
}