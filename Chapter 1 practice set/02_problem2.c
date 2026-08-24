// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height

#include <stdio.h>

int main(){
    float radius = 5.0;
    float area = 3.14159 * radius * radius;
    printf("Area of circle with hard coded inputs: %.2f\n", area);  // It's a placeholder/format instruction used by printf.
    float height = 10.0;
    float volume = area * height;
    printf("Volume of cylinder with hard coded inputs: %.2f\n", volume);
    return 0;
}