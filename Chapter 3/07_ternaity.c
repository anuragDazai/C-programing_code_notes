#include <stdio.h>

int main(){
    // condition ? expression-if-true : expression-if-false // "?" and ":" are called Ternary Operators CodeWithHarry
    int a = 34;
    int b = 45;
    a>b ? printf("a is greater than b\n") : printf("b is greater than a\n"); // this is a single line ternary operator which is similar to if else statement but in a single line.
    // first we write the condition that needs to be satisfied
    // then we write the expression that needs to be executed if the condition is true
    // then we write the expression that needs to be executed if the condition is false the else block
    
    return 0;
}