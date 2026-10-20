// Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

void multiplication(int mul[], int arr[][10]) // when passing a 2D array to a function, you must specify the number of columns
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
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
    multiplication(mul, arr);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\t%d\n", arr[0][i], arr[1][i], arr[2][i]);
    }
    return 0;
}