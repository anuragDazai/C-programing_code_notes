// Create a two-dimensional vector using structures in C

#include <stdio.h>

struct Vector2D {
    float x;
    float y;
};

int main(){
    struct Vector2D v = {3.5, 4.2}; // Initialize the vector with x and y components
    printf("Vector: (%.2fi, %.2fj)\n", v.x, v.y);
    return 0;
}