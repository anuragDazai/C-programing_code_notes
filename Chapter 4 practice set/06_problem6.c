// Write a program to implement program 5 using for  and do-while  loop.

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    // USING DO WHILE LOOP

    // do {
    //     sum += i;
    //     i++;
    // }while (i <= 10);

    // printf("Sum of first 10 natural numbers = %d\n", sum);


    for (i;i<=10; i++){
        sum+=i;
    }
        printf("Sum of first 10 natural numbers = %d\n", sum);
    return 0;
}