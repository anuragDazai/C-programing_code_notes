// Write a program with three functions:
// 1. Good morning function which prints "good morning".
// 2. Good afternoon function which prints "good afternoon".
// 3. Good night function which prints "good night".
// main() should call all of these in order 1→2→3

#include <stdio.h>

void morning(){
    printf("Good morning!\n");
}
void afternoon(){
    printf("Good afternoon!\n");
}
void night(){
    printf("Good night!\n");
}

int main(){
    morning();
    afternoon();
    night();
    return 0;
}