// Write a program to illustrate the use of arrow operator ->  in C

#include <stdio.h>
struct Point {
    int x;
    int y;
};

int main(){
    struct Point p1 = {10, 20}; // initialize the point with x and y coordinates
    struct Point *ptr = &p1; // we are creating a pointer to the struct Point and assigning it the address of p1
    printf("Point: (%d, %d)\n", ptr->x, ptr->y); // here we are using the arrow operator -> to access the members of the struct Point using the pointer ptr, it is equivalent to (*ptr).x and (*ptr).y
    return 0;
}