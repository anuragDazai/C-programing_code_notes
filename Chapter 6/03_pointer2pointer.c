// A pointer to a pointer (often called a double pointer) is a variable that stores the memory address of another pointer variable.
// Instead of pointing directly to a plain value (like an int), it points to a pointer that is already pointing to that value

#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i;
    int **k = &j;
    printf("The pointer to i is j and it's location is: %p and it's pointer k and it's location is %p", j, k);
    
    return 0;
}