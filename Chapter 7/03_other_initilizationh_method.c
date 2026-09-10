// there are many other ways to initialize a array

#include <stdio.h>

int main()
{
    int cgpa[3] = {2, 4, 5}; // this is one way to initialize an array
    int cgpa2[] = {0}; // we can initialize array with indefinite number of elements as well.
    printf("cgpa[0] = %d\n", cgpa[0]);
    printf("cgpa[1] = %d\n", cgpa[1]);
    printf("cgpa[2] = %d\n", cgpa[2]);
    return 0;
}