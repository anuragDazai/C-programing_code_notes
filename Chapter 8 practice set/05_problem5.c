// Write your own version of strcpy  function from <string.h>

#include <stdio.h>

// Function: my_strcpy
// Purpose: Copies a string from the source (src) to the destination buffer (dest).
// Parameters:
//   - dest: A pointer to the memory buffer where characters will be written.
//   - src:  A pointer to the null-terminated source string (marked 'const' so its contents cannot be modified).
// Return value: A pointer (char*) pointing to the very beginning of the destination string.
char* my_strcpy(char *dest, const char *src) {
    // 1. Save the starting memory address of 'dest'.
    // As we copy characters, the 'dest' pointer will advance forward.
    // Saving this starting address in 'ret' allows us to return the beginning
    // of the string at the end of the function.
    char *ret = dest;

    // 2. Loop through the source string until reaching the null terminator '\0'.
    // '*src' dereferences the pointer to read the current character.
    while (*src != '\0') {
        // Copy the character from 'src' into the memory location pointed to by 'dest'.
        *dest = *src;

        // Advance the destination pointer to the next byte/character slot.
        dest++;

        // Advance the source pointer to the next character in the source string.
        src++;
    }

    // 3. Manually place the null terminator '\0' at the end of the destination string.
    // The while loop stops the moment '*src' hits '\0', meaning the loop itself
    // did NOT copy that final '\0'. Without this line, 'dest' would not be a valid C string.
    *dest = '\0';

    // 4. Return the original starting address of 'dest' that we saved in 'ret'.
    // This allows function chaining (e.g., printf("%s\n", my_strcpy(dest, src));).
    return ret;
}

int main() {
    // 1. Initialize the source string.
    // In memory: ['H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'] (14 bytes total).
    char src[] = "Hello, World!";

    // 2. Allocate a destination buffer on the stack.
    // It must be large enough to hold all characters of 'src' plus the '\0' byte.
    // 100 bytes is more than enough for our 14-byte string.
    char dest[100];

    // 3. Call my_strcpy to perform the byte-by-byte copy.
    // When passed to the function, both array names decay into pointers
    // to their first elements (&dest[0] and &src[0]).
    my_strcpy(dest, src);

    // 4. Print the newly copied string stored in 'dest'.
    // '%s' starts reading at the address of 'dest' and continues until it hits '\0'.
    printf("Copied string: %s\n Source string: %s\n", dest, src);

    return 0;
}