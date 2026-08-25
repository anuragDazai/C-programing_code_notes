#include <stdio.h>

int main(){
    if(34){ // IN C, any non-zero value is considered TRUE. So this if statement will execute.
        printf("This if is executed!\n");
    }
    if(3443242){
        printf("This if ALSO executed!\n");
    }
    if(-1){ // IN C, any non-zero value is considered TRUE. So this if statement will execute.
        printf("This if ALSO executed!\n");
    }
    if(0){ // IN C, 0 is considered FALSE. So this if statement will NOT execute.
        printf("This if is NOT executed!\n");
    }
    return 0;
}