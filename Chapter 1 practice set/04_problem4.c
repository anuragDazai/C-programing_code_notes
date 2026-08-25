// Write a program to calculate simple interest for a set of values representing principal,number of years, and rate of interest

#include <stdio.h>

int main(){
    float principal = 1000.0;
    int years = 2;
    float rate = 5.0;
    printf("Simple Interest for %d years at %.2f%% rate on principal %.2f is: %.2f\n", years, rate, principal, (principal * years * rate) / 100);
    
    return 0;
}