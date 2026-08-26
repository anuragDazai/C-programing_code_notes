// Implement 10 using other types of loops

#include <stdio.h>

int main() {

    int num;
    int isPrime = 1; 
    int i = 2;

    scanf("%d", &num);

    // USING FOR LOOP

    // for (i; i < num; i++) {
    //     if (num % i == 0) { 
    //         isPrime = 0;
    //         break;
    //     }
    // }

    
    // while(i<num){
    //     if (num % i == 0) { 
    //         isPrime = 0;
    //         break;
    //     }
    //     i++;  
    // }

    // USING WHILE LOOP

    do{
        if (num % i == 0) { 
            isPrime = 0;
            break;
        }
        i++;  
    }while(i<num);

    if (isPrime) {
        printf("This number is prime.");
    }
    else {
        printf("This number is not prime.");
    }

    return 0;
}