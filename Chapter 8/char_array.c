#include <stdio.h>

int main()
{
    // In C, a single character (like 'A', 'z', or '$') is stored inside a char data type, which takes up 1 byte of memoryIn C, a single character (like 'A', 'z', or '$') is stored inside a char data type, which takes up 1 byte of memory.
    char str[4] = {'a', 'b', 'c', '\0'}; // %c is the format specifier for a single character, and they're stored like how array stores, contigious memory block.
    // The computer stores the ASCII value of 'A' (which is 65) in a single memory cell.
    printf("%c\n", str[0]);
    // string is a 1D character array terminated by a null character '\0's

    char name[] = "Anurag";  // is same as char name[] = {'A', 'n', 'u', 'r', 'a', 'g', '\0'};
    printf("%c\n", name[1]); // but this fomat alreaddy adds the null character at the end of the string, so we don't have to add it manually.
    return 0;
}