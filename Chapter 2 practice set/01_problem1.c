// Which of the following is invalid in C?
// a. int a = 1; int b = a;
// b. int v = 3*3;
// c. char dt = '21 dec 2020

// here c is invalid because dt is a character type which contains only one character of any letter, hence cannot add any string so we get a error there.

#include <stdio.h>

int main()
{
    int a = 1;
    int b = a;
    int v = 3 * 3;
    char dt = '21 dec 2020'; // this is char datatype and we're entering a string so it's wrong here
    return 0;
}