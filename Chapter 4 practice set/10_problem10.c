// Write a program to check whether a given number is prime or not using loops

#include <stdio.h>

int main() {

    int num;
    int isPrime = 1; // non zero num is always true

    scanf("%d", &num);

    for (int i = 2; i < num; i++) { // goes from 2 to n-1 to check if it's completely divisible then it's not a prime number and if the has any kind of remainder that means it's not divisible so it's a prime number

        if (num % i == 0) { // 2 to n-1 if any (remainer == 0) then we set isPrime = 0; that means the number is not prime.
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("This number is prime.");
    }
    else {
        printf("This number is not prime.");
    }

    return 0;
}