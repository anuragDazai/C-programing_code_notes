#include <stdio.h>

int main()
{
    // WARNING: Declaring an empty array without a size (char str[] = {})
    // does not allocate memory for input. In C, you must specify a maximum
    // size (e.g., char str[100];) so scanf() has a safe buffer to write into.
    char str[100];

    // scanf() reads a string from the user.
    // 1. It automatically appends a null character ('\0') at the end[cite: 1], if we addd specifier as %s as string.
    // 2. We do NOT use the '&' (address-of) operator because the name of an
    //    array already evaluates to the memory address of its first element.
    scanf("%s", str);

    // printf("%s"...) prints characters sequentially from the memory address
    // until it encounters the null terminator ('\0'), which marks the end of the string[cite: 1].
    printf("%s", str);

    return 0;
}