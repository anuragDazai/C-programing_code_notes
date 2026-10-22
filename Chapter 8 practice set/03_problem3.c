// Write your own version of strlen  function from <string.h> library. The function should take a string as input and return the length of the string.


#include <stdio.h>

// User-defined version of standard strlen()
// Takes a pointer to the start of the string and returns the character count.
int my_strlen(const char *str) {
    int length = 0; // at first we initilized the length of the string as 0.

    // Direct check: loop through each character until encountering '\0'
    while (str[length] != '\0') { // checks each letters of the string start from str[0].
        length++; // Increment count for each valid character
    }

    return length; // as the last letter is \0, it breaks the loop and returns the lenght that it counted
}

int main() {
    char str[] = "Anurag";

    // Call custom strlen function
    int length = my_strlen(str); // so arrays always passes the copy of the original address, not the contents.

    printf("The length of the string \"%s\" is: %d\n", str, length);

    return 0;
}