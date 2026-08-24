// Write a program to convert Celsius (Centigrade) temperature to Fahrenhei

#include <stdio.h>

int main(){
    int celcius;
    printf("Enter the tempreture in celcius: ");
    scanf("%d", &celcius);  
    printf("Temperature in Celsius = %d and that in Fahrenheit = %.2f\n", celcius, (celcius * 9.0/5.0) + 32.0);

    return 0;
}