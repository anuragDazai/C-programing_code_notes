#include <stdio.h>

int main(){
    int age = 20;
    if(age>18){
        printf("You are eligible to vote\n");
    }
    else if(age==18){ // this is similar to elif in python we put another conditional block when needed.
        printf("You are just eligible to vote\n");
    }
    else{
        printf("You are not eligible to vote\n");
    }
    return 0;
}