// A multidimensional array is an array that uses more than one index to access its elements.
// - 1D array → a list of elements.
// - 2D array → rows and columns, like a table.
// - 3D array → multiple 2D tables stacked together.

#include <stdio.h>

int main()
{
    int arr[2][3] = {// so here we say it contains 2 rows and 3 columns, so we can say it is a 2D array, similar to matrices in mathematics.
                     {10, 20, 30},
                     {40, 50, 60}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d | Address: %p\n",
                   i, j, arr[i][j],
                   (void *)&arr[i][j]);
        }
    }

    printf("%d\n", arr[0][1]); // Output: 20, it accesses the element in the first row and second column of the 2D array.
    printf("%d\n", arr[1][0]); // Output: 40, it
    printf("%d", arr[1][2]);   // Output: 60
    return 0;
}

// in memory they are stored as contitigous block of memory, like for continous of all the first row elements and then continue with the second row and so on.

/*
MULTIDIMENSIONAL ARRAY MEMORY ALLOCATION

1. C stores 2D arrays in contiguous memory using ROW-MAJOR order.
2. Elements of the first row are stored first, followed by the next row.
3. For int arr[2][3], memory order is:
   arr[0][0], arr[0][1], arr[0][2],
   arr[1][0], arr[1][1], arr[1][2].

4. Address calculation:
   Address = Base + (row * total_columns + column) * sizeof(int)

5. A 2D array is an array of arrays, not an array of pointers.
*/