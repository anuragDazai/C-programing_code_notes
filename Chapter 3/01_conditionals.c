#include <stdio.h>

int main(){
    int a = 20;
    // if statements are used to check a condition and execute a block of code if the condition is true
    // when the condition is false, the block of code is skipped.
    if(a>10){
        printf("We are inside a if statement\n");
        printf("The age is greater than 10\n");
    }
    if(a%5==0){
        printf("We are inside another if statement\n");
        printf("The age is divisible by 5\n");
    }
    return 0;
}