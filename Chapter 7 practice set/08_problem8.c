// Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

void multiplication(int multi[], int array[][10]) // when passing a 2D array to a function, you must specify the number of columns
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = multi[i] * (j + 1); // it changes the origian array's elemets i.e arr[3][10] in main function
        }
    }
}

int main()
{
    int arr[3][10]; // rows X columns
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int mul[] = {a, b, c};
    multiplication(mul, arr); // we sending the copy of the address of the original array to the function, so any changes made to the array in the function will affect the original array.
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\t%d\n", arr[0][i], arr[1][i], arr[2][i]);
    }
    return 0;
}