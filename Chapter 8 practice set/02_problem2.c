// Write a program to take string as an input from the user using %c  and %s  and confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main() {
    // 1. Allocate a fixed buffer for the first string.
    // Specifying an explicit size prevents buffer overflow and memory corruption.
    char str1[50];
    
    // 2. Take input using %s.
    // %s reads characters up to the first whitespace character (space/newline)
    // and automatically appends the null terminator '\0' at the end.
    printf("Enter the first string: ");
    scanf("%49s", str1); 

    // 3. Allocate a buffer for the second string.
    // If we want to read 5 characters, we need 6 elements (5 chars + 1 for '\0').
    char str2[6];
    
    printf("Enter the second string (up to 6 characters): ");
    
    // 4. Read character-by-character using %c.
    for (int i = 0; i < 6; i++) {
        // The leading space in " %c" tells scanf to discard any leftover 
        // whitespace (like the '\n' from pressing Enter after entering str1).
        scanf(" %c", &str2[i]);
    }
    
    // 5. Manually null-terminate the character array.
    // Unlike %s, reading with %c does NOT automatically add '\0',
    // which is required for printf("%s") and strcmp() to identify the end of the string.
    str2[6] = '\0';

    // 6. Print both strings to verify their contents.
    printf("\nFirst string  (via %%s): %s\n", str1);
    printf("Second string (via %%c): %s\n", str2);

    // 7. Compare the two strings using strcmp() from <string.h>.
    // strcmp returns 0 if both strings contain identical characters.
    if (strcmp(str1, str2) == 0) {
        printf("\nResult: Both strings are equal.\n");
    } else {
        printf("\nResult: The strings are NOT equal.\n");
    }

    return 0;
}