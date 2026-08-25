#include <stdio.h>
// first see the presidence (the priorty of which arethmatic operator is more then we go for associativity which tells us in a same priority list from where to take it either from left to right or right-to-left)



int main(){
    int a = 3;
    int b = 7;
    int c = 9;
    // so here we take the associativity of the operators and associativity of division and mulitilication is from left to right so here a*b will evaluate first then /c.
    printf("The value is %d\n", a*b/c);
    // here from left to right so first c*a then /b
    printf("The value is %d ", a*c/b);
    return 0;
}