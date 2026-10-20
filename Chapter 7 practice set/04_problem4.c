// Repeat problem 3 for a general input provided by the user using scanf 

#include <stdio.h>

int main(){
    int arr[10]={}; // array would look likes {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}
    int num;
    printf("Enter a number you want multiplication of: ");
    scanf("%d",&num);
    for(int i = 0; i<10; i++){
        arr[i] = (i+1)*num; // adding the multiplication as array element as we proceed towards 50 from 5.
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i+1, arr[i]); // we displaying the whole array as it contains the multiplication table for 5.
    }
    
    return 0;
}