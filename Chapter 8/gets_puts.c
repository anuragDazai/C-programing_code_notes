// puts() is used to write a string to the standard output (your screen), followed automatically by a newline character (\n).
// It prints the string and automatically moves the cursor to the next line.
// gets() was originally designed to read a line of text (including spaces) from the standard input (keyboard) and store it in a character array.

#include <stdio.h>

int main()
{
    char name[] = "Anurag";
    puts(name);          // Prints "Anurag" and goes to a new line
    puts("Hello World"); // Prints "Hello World" and goes to a new line
    // printf: Unlike printf("%s", name), you don't need format specifiers with puts(), and it automatically adds a newline at the end so you don't have to manually type \n.
    char str[100];
    printf("Enter a string: ");
    gets(str); // Reads input until the user presses Enter
    puts(str); // Prints the input string and goes to a new line

    // 🚨 WHY YOU SHOULD NEVER USE IT (Buffer Overflow):gets() does not check array bounds. If you declare an array of size 10 (char str[10];) and the user types 50 characters, gets() will happily keep writing those extra 40 characters past the end of the array into random computer memory. This causes a Buffer Overflow, which can crash your program or create severe security vulnerabilities.

    //     1. puts() and gets() (Strictly for Strings)
    // puts() expects a pointer to a null-terminated string (char *). It cannot print numbers, floats, or raw data directly unless you format them first.
    // gets() (which you shouldn't use anyway due to security flaws) only reads a sequence of characters into a string buffer until the user presses Enter.
    return 0;
}