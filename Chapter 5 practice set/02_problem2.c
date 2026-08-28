// Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

float fahrenheit(float celsius);

int main(){
    float temp = 32;
    float celsius = fahrenheit(temp);
    printf("%.2f C = %.2f F", temp, celsius);
    return 0;
}

float fahrenheit(float celsius){
    return celsius * 9/5 + 32.0;
}