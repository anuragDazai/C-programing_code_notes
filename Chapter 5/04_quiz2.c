// #include <stdio.h>

// int area(int a){
//     return (a*a);
// }

// int main(){
//     int area_recieved = area(5);
//     printf("The area of the square is %d: ", area_recieved);
//     return 0;
// }

#include <stdio.h>
#include <math.h>       

int main(){
    int a = 5;
    printf("The area of the square is: %f\n", pow(a, 2)); // pow means power here it means a^2, ant it returns a double so we need %f not %d.
    return 0;
}