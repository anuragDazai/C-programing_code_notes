// Write a program to check whether a given character is present in a string or not.



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
    if (result > 0) {
        printf("The character '%c' is present in the string.\n", ch);
    } else {
        printf("The character '%c' is not present in the string.\n", ch);
    }
    return 0;
}