// Write a function to calculate force of attraction on a body of mass 'm'  exerted by
// earth. Consider g = 9.8m/s²

#include <stdio.h>

float force(float m)
{
    // F = ma (mass * acceleration)
    return m * 9.8;
}

int main()
{
    float result = force(10);

    printf("Force = %.2f N", result);

    return 0;
}