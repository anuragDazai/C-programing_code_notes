// Write a function slice()  to slice a string. It should change the original string such that it is now the sliced string. Take m  and n  as the start and ending position for slice

// Write your own version of strlen  function from <string.h> library. The function should take a string as input and return the length of the string.


#include <stdio.h>

// Function: slice
// Purpose: Slices a substring in-place by mutating the original array.
// Parameters:
//   - str: A pointer to the character array to slice.
//   - start: The starting index of the slice (inclusive).
//   - end: The boundary index where the slice ends (exclusive).
// Return value: A pointer (char*) pointing directly to the character at 'start'.
char* slice(char *str, int start, int end) {
    // 1. In-place truncation: Overwrite the character at index 'end' with '\0'.
    // Any C string function (e.g., printf with %s) scanning this array will stop here.
    // NOTE: This permanently modifies the original string passed into this function.
    str[end] = '\0';

    // 2. Return the memory address of the element at the 'start' index.
    // The slice effectively starts at &str[start] and finishes at the '\0' just placed.
    return &str[start];
}

int main() {
    // Initialize a modifiable character array.
    // Memory layout:
    // Index:     0    1    2    3    4    5    6
    // Value:   ['A', 'n', 'u', 'r', 'a', 'g', '\0']
    char str[] = "Anurag";
    
    // Print the string before mutation.
    // Displays "Anurag" because '\0' is currently at index 6.
    printf("The original string is : %s\n", str);

    // Call slice with start = 2 and end = 5:
    // - Overwrites index 5 ('g') with '\0'.
    // - Array now looks like: ['A', 'n', 'u', 'r', 'a', '\0', '\0']
    // - Returns &str[2] (the address of character 'u').
    // 'my_string' receives this memory address.
    char *my_string = slice(str, 2, 5);

    // %s starts reading at 'my_string' (index 2: 'u') and continues until hitting '\0' at index 5.
    // Prints characters at index 2, 3, and 4: "ura".
    printf("The sliced portion of the string is : %s\n", my_string);

    return 0;
}


// AI for comments and code explanation.