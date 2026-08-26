// Write a program to print 'n' natural numbers in reverse order.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a natural number 'n': ");
    scanf("%d", &n);
    for(; n > 0; n--){
        printf("Number is %d\n", n);
    }
    return 0;
}

