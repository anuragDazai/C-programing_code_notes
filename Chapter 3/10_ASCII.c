
#include <stdio.h>

int main(void) {
    char ch = 'A';

    // %c tells printf: "Look up this number in the ASCII table and draw the letter"
    printf("Interpreted as a character: %c\n", ch); // Prints: A

    // %d tells printf: "Just show me the raw integer stored in memory"
    printf("Interpreted as a number:    %d\n", ch); // Prints: 65

    return 0;
}