#include <stdio.h>

int main(){
    int a = 20;
    // if statements are used to check a condition and execute a block of code if the condition is true
    // when the condition is false, the block of code is skipped.
    if(a>10){
        printf("We are inside a if statement\n");
        printf("The age is greater than 10\n");
    }
    else{ // else statements are used to execute a block of code when the condition in the if statement is false, or if block doesn't execute.
        printf("We are inside a else statement\n");
        printf("The age is less than or equal to 10\n");
    }
    return 0;
}