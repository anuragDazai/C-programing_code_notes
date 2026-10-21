
#include <stdio.h>

int main()
{
    char str[] = {'A', 'n', 'u', 'r', 'a', 'g'}; // If you don't include the null character (\0) at the end, C does not consider it a string—it treats it strictly as a normal character array.
    // if we try to print it as normally as a string it'll show
    printf("%s\n", str); // This will lead to undefined behavior because the string is not null-terminated.
    // If there is no \0 at the end of your array, the computer won't stop. It will keep reading the raw memory right after your array—printing random garbage symbols, numbers, or symbols from other programs—until it accidentally runs into a zero byte somewhere else in RAM. This can cause weird output or even crash your program with a Segmentation Fault.

    char str2[] = {'A', 'n', 'u', 'r', 'a', 'g', '\0'}; // Now we have included the null character (\0) at the end, making it a proper string.
    printf("%s\n", str2);                               // This will print "Anurag" correctly because the string is now null-terminated.

    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        printf("%c\n", str[i]); // This will print each character of the array on a new line, regardless of whether it's null-terminated or not, but i'll not be a string but series of characters printed.
    }

    char str3[] = "Anurag"; // This is a string literal, which automatically includes the null character (\0) at the end.
    printf("%s\n", str3);   // This will print "Anurag"

    return 0;
}