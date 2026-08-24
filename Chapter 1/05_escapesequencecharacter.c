#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line, and this is a escape sequence character. Escape sequence characters are used to represent special characters that cannot be easily typed or displayed in a string. The backslash (\) is used as an escape character, followed by a specific character to represent the desired special character. For example, '\n' represents a new line, '\t' represents a tab, and '\\' represents a backslash itself.
    printf("Hey I am good \\n nice");
    return 0;
}