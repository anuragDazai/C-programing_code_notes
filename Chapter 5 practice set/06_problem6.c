// Write a recursive function to calculate the sum of first 'n'  natural numbers

#include <stdio.h>

int sum(int); // Both ways are valid in C because the compiler only needs to know the data types and the number of parameters during the prototype stage.
int sum(int a); 

int main(){
    int num = 5; 
    int summation = sum(num);
    printf("The num of first %d natural numbers is: %d",num, summation );
    return 0;
}

int sum(int a){
    if(a==1){
        return 1;
    }
    return a + sum(a-1);
}


// sum(5) = 5 + sum(4)
//        = 5 + (4 + sum(3))
//        = 5 + (4 + (3 + sum(2)))
//        = 5 + (4 + (3 + (2 + sum(1))))
//        = 5 + 4 + 3 + 2 + 1 
//        = 15