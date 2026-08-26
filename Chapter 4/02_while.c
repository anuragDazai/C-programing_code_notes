// these are while loops :Used when the number of iterations is unknown, and execution depends purely on an external condition being true before running.
// run this block of code until the while statement is true i.e here until i is less than 5, and in each iteration we're increasing it by 1, so it'll be true until i<5 times.
//Execution Flow: Condition check ------> If True: execute Loop Body ------> Repeat.


#include <stdio.h>

int main(){
    int i = 0;
    while(i<5){ // here we write the condition that is true, and until it's true the iteration will continue to loop, and the block will repeat, UNTIL IT'S TRUE.
        //Minimum Runs: 0 times (if the condition is False at the very start, the body never runs).
        printf("Happy birthday!\n");
        i = i+1; // we're increasing the value of i each iteration.
    }
    return 0;
}