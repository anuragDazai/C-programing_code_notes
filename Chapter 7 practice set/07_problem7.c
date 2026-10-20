// Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively

#include <stdio.h>

int main()
{
    int arr[3][10]; // column X rows
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\t%d\n", arr[0][i], arr[1][i], arr[2][i]);
    }
    return 0;
}