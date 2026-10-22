// Write a program to count the occurrence of a given character in a string.
#include <stdio.h>

int countCharacter(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) { // we iterate through the string and adding +1 to count of all the occurace of ch.
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'l';
    int result = countCharacter(str, ch); // we pass the string and the character to the function countCharacter, which returns the count of occurrences of the character in the string.
    printf("The character '%c' occurs %d times in the string \"%s\"\n", ch, result, str);
    return 0;
}