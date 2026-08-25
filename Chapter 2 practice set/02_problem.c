#include <stdio.h>

int main(){
    // What data type will 3.0/8 − 2 return?
    int a = 8;
    float b = 3.0;
    int c = 2;
    int d = b/a - c;
    printf("The value it'll return will be int if we write it in int %d\n", d); // Type Demotion Truncation: Storing -1.625 inside an integer d discards the decimal fraction (.625), leaving d = -1. Printing d with %d correctly displays -1.
    printf("If we directly do it then we get %d\n", (b/a - c));
    printf("The value it'll return will be float if we write it in float %f", b/a - c);
    return 0;
}