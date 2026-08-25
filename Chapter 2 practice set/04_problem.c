#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1
    float x = 2;
    int y = 7;
    int z = 3;
    int k = 1;
    printf("The value of 3*x/y-z+k is %f\n", 3*x/y-z+k); // Step by step evaluation: 3*2 = 6, 6/3 = 2, 2-3 = -1, -1+1 = 0. Final result is 0.
    // steps:
    // 3*x/y-z+k = 3*2/y-z+k (from left to right)
    // then 3*2/y-z+k = 6/y-z+k
    // then 6/3-z+k = 2-z+k
    // then 2-3+k = -1+k
    // -1+1 = 0
    // so first presidence priority then we go for associativity which tells us in a same priority list from where to take it either from left to right or right-to-left
    return 0;
}