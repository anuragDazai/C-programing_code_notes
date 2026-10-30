// When a reading function reaches the end of a file, it may return EOF or NULL, depending on the function.
// we can use a loop to read characters from a file until we reach the end of the file. The fgetc function returns EOF when it reaches the end of the file, which we can use as a condition to stop reading.


#include <stdio.h>  // Provides FILE, fopen(), fgetc(), printf(), EOF, fclose()

int main(void)
{
    int ch;          // Stores a character OR EOF returned by fgetc()
    FILE *ptr;       // File pointer used to access the file

    // Open harry.txt in read mode ("r")
    // The file must already exist.
    ptr = fopen("harry.txt", "r");

    // Check whether the file was opened successfully.
    // fopen() returns NULL if opening fails.
    if (ptr == NULL)
    {
        perror("Error opening harry.txt");
        return 1;   // Stop the program because the file cannot be read
    }

    // Read the file one character at a time.
    // The loop continues as long as fgetc() does not return EOF.
    while ((ch = fgetc(ptr)) != EOF) // EOF means End Of File.
    {
        // Print the character that was successfully read.
        putchar(ch);
    }

    // After the loop, check whether reading stopped due to an error.
    if (ferror(ptr))
    {
        perror("Error while reading the file");
    }

    // Close the file and release its associated resources.
    fclose(ptr);

    return 0;       // Program completed
}
