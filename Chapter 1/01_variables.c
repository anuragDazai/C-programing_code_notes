#include <stdio.h>
int main(){
    int a; // we just declared a variable of type int, it doesn't have a value yet.
    a = 5; // now we assign the value 5 to the variable a
    printf("%d", a); // this will print the value of a to the console, %d is a format specifier Format specifiers are used to tell the compiler how a value should be interpreted during input and output operations
    int b = 10; // we declared and initialized a variable of type int in one line
    char c = 'A'; // for character we use single quotes, never double quotes because double quotes are used for strings
    printf("%c", c); // this will print the value of c to the console, %c is a format specifier for characters
    return 0;   
}