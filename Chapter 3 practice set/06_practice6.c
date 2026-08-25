// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main(){
    int a=5, b=6, c=8, d=1;
    if(a>b&&a>c&&a>d){
        printf("The largest number is %d",a);
    }
    else if (b>c&&b>d){
        printf("The largest number is %d", b);
    }
    else if (c>d){
        printf("The largest number is %d", c);
    }
    else{
        printf("The largest number is %d", d);
    }
    return 0;
}