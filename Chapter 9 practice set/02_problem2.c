// Write a function sumVector  which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

#include <stdio.h>
#include <stdio.h>

typedef struct Vector2D {
    float x;
    float y;
} vect;

vect sumVector(vect v1, vect v2) { // it takes struct Vector2D as input and returns a struct Vector2D as output
    vect result; // initilizing a new vector to store the result of the sum of two vectors
    result.x = v1.x + v2.x; // adding up two same vectors.
    result.y = v1.y + v2.y;
    return result; // resultant vector is returned to the main function.
}

int main(){
    vect v1 = {3.5, 4.2}; // Initialize the first vector with x and y components 
    vect v2 = {1.5, 2.8}; // Initialize the second vector with x and y components
    printf("Vector 1: (%.2fi, %.2fj)\n", v1.x, v1.y);
    printf("Vector 2: (%.2fi, %.2fj)\n", v2.x, v2.y);
    printf("Sum of vectors: (%.2fi, %.2fj)\n", sumVector(v1, v2).x, sumVector(v1, v2).y);
    return 0;
}