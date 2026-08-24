/*
 * Preprocessor Directive:
 * Instructs the preprocessor to include the Standard Input/Output library header.
 * Contains declarations for standard I/O functions like printf() and scanf().
 */
#include <stdio.h>

/*
 * Main Function:
 * The designated entry point where program execution begins after runtime bootstrap.
 * 'int' indicates that the function returns an integer status code to the OS.
 */
int main() {

    /*
     * Variable Declaration:
     * Allocates 4 bytes (32 bits) on the stack frame to store an integer value.
     * At this point, 'a' contains uninitialized/garbage binary data.
     */
    int a;

    /*
     * Standard Output (Prompt):
     * Writes the string literal to the standard output buffer (stdout).
     * Guides the user on what input is expected.
     */
    printf("Enter an integer: ");

    /*
     * Standard Input:
     * '%d'  -> Format specifier instructing scanf to parse an ASCII integer string.
     * '&a'  -> Address-of operator (&) passes the exact memory address of 'a'
     *          so scanf can write the converted binary value directly into RAM.
     */
    scanf("%d", &a);

    /*
     * Formatted Output:
     * Reads the binary integer value stored in variable 'a', converts it to text,
     * and substitutes '%d' with that value before writing to stdout.
     * '\n' moves the cursor to a new line.
     */
    printf("You entered: %d\n", a);

    /*
     * Exit Status:
     * Returns status code 0 back to the operating system / parent shell,
     * signaling that the program executed and terminated successfully without errors.
     */
    return 0;
}

// By passing &a, you hand scanf() a pointer directly to the memory slot of a. This gives scanf() the exact coordinates it needs in RAM to write the user's input directly into the variable.