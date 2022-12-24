#include <stdio.h>
#include <stdlib.h>

void transpose (int** a, int r, int c, int** b)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b [i][j] = a [j][i];
        }
    }
}

int main()
{
    int** arr;
    int row, col;
    printf ("Enter the row: ");
    scanf ("%d", &row);
    printf ("Enter the columns: ");
    scanf ("%d", &col);

    arr = (int**) malloc (row * sizeof (int*));
    for (int i = 0; i < row; i++)
    {
        arr [i] = (int*) malloc (col * sizeof (int));
    }

    printf ("Enter the array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf ("%d", &arr [i][j]);
        }
    }

    int** res;
    res = (int**) malloc (col * sizeof (int*));
    for (int i = 0; i < col; i++)
    {
        res [i] = (int*) malloc (row * sizeof (int));
    }  
    transpose (arr, row, col, res);

    printf ("The Transpose of the Matrix is:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf ("%d\t", res [i][j]);
        }
        printf ("\n");
    }

    free (arr);
    free (res);
    return 0;
}
