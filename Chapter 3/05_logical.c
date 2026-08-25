#include <stdio.h>

int main(){
    int a=1; int b=0;
    printf("The value of a and b is %d\n", a&&b); // this is AND operator and it says if both are true then we final value is true otherwise false
    printf("The value of a or b is %d\n", a||b); // this is OR operator and it says if any one is true then we final value is true otherwise false
    printf("The value of not a is %d\n", !a); // this is NOT operator and it says if the value is true then it will return false and vice versa, opposite the given answer

    return 0;
}