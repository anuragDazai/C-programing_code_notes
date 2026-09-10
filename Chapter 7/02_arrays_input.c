
#include <stdio.h>

int main(){
    int num[30];
    num[1] = 60;
    printf("Enter the marks of a student: ");
    scanf("%d", &num[0]);
    // we can use loop as well for entering values to the array.
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    
    printf("The marks of all the students are %d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
    
    return 0;
}