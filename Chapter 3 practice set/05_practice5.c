// Write a program to determine whether a character entered by the user is lowercase or
// not.

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Leading space skips any leftover whitespace/newlines

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE letter.\n", ch);
    } else {
        printf("'%c' is not an alphabetical letter.\n", ch);
    }

    return 0;
}