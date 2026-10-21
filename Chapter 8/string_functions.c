
#include <string.h> // this is a header file which includes all the built-in string functions in C. It is a standard library in C which contains many useful built-in functions for string manipulation.
#include <stdio.h>

int main()
{
    char str1[100] = "Hello";
    printf("%d\n", strlen(str1)); // strlen gives us the length of a string, excluding the null character.
    char source[] = "anurag";
    char target[30];
    strcpy(target, source);         // target now contains "anurag", as strcpy copies the content of source into target.
    printf("%s\n", target);         // prints "anurag"
    strcat(target, source);         // target now contains "anuraganurag", as strcat appends the content of source to the end of target.
    printf("%s\n", target);         // prints "anuraganurag"
    int a = strcmp(source, target); // strcmp compares two strings. It returns 0 if they are equal, a negative value if source is less than target, and a positive value if source is greater than target.
    printf("%d\n", a);              // it'll print a negative value because "anurag" is less than "anuraganurag" in lexicographical order, or jo phele dictionary me ayege if first one then it'll be negative and if second one then it'll be positive, like in this case, it originally compares ASCII values and then gives us the result.
    int b = strcmp("deep", "joke"); // since first one will come first in dictionary so it'll show a negative result.
    printf("%d\n", b);
    return 0;
}