// Write a program to print multiplication table of 10 in reversed order

#include <stdio.h>

int main(){
    int num = 10;
    for(int i = 10; i; i--){
        printf("%d X %d = %d\n",num, i, i*num);
    }
    return 0;
}