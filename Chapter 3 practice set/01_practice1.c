#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // if contains a nonzero value here so it'll be true always because a=11 is an assignment operation which will assign 11 to a and return 11 which is non-zero so the condition will be true.
        printf("I am 11");
    else
        printf("I am not 11"); // this will print i'm 11 because in a=11 is ther but not a==11 so the condition for if statement will always be true hence it'll evaluate.
    return 0;
}