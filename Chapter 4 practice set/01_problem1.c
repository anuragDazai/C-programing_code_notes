// Write a program to print multiplication table of a given number n 

#include <stdio.h>

int main(){
    int i =1;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i<=10){
        printf("%d X %d = %d\n",num, i, i*num);
        i++;
    }
    printf("**********************************************************\n");
    for(; i <= 10; i++){
        printf("%d X %d = %d\n",num, i, i*num);
    }
    return 0;
}