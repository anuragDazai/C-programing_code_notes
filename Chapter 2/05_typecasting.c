#include <stdio.h>

int main(){
    float a = 5.6;
    int n = 7;
    // type casting refers to the process of converting a variable from one data type to another. In C, we can perform type casting using the syntax (data_type) variable. For example, to convert a float variable to an int, we can use (int) a.
    n = (int) a;
    printf("The value after typecasted into int from float is %d " ,n);
    return 0;
}