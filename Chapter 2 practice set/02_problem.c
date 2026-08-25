#include <stdio.h>

int main(){
    // What data type will 3.0/8 − 2 return?
    int a = 8;
    float b = 3.0;
    int c = 2;
    int d = b/a - c;
    printf("The value it'll return will be int if we write it in int %d\n", d); // Type Demotion Truncation: Storing -1.625 inside an integer d discards the decimal fraction (.625), leaving d = -1. Printing d with %d correctly displays -1.
    printf("If we directly do it then we get %d\n", (b/a - c)); // Format Specifier Mismatch (Bug): The expression b/a - c produces a floating-point value passed via the CPU's floating-point registers (XMM), but %d instructs printf to read an integer from general-purpose registers (or reads raw IEEE-754 float bits), leading to Undefined Behavior and outputting garbage/0.
    printf("The value it'll return will be float if we write it in float %f", b/a - c); // Correct Output: The expression produces -1.625 (double), and %f properly reads and formats floating-point registers to display -1.625000.
    return 0;
}