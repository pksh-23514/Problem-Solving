/* To Perform Addition and Subtraction of the 2 given Matrices.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a, **b, **c, **d;
    int r1, c1, r2, c2;
    printf ("Enter the Row and Columns of the matrix 1: ");
    scanf ("%d %d", &r1, &c1);
    printf ("Enter the Row and Columns of the matrix 2: ");
    scanf ("%d %d", &r2, &c2);

    if ((r1 == r2) && (c1 == c2))
    {
        a = (int**) malloc (r1 * sizeof (int*));
        for (int i = 0; i < r1; i++)
        {
            a [i] = (int*) malloc (c1 * sizeof (int));
        }
        b = (int**) malloc (r2 * sizeof (int*));
        for (int i = 0; i < r2; i++)
        {
            b [i] = (int*) malloc (c2 * sizeof (int));
        }
        c = (int**) malloc (r1 * sizeof (int*));
        for (int i = 0; i < r1; i++)
        {
            c [i] = (int*) malloc (c1 * sizeof (int));
        }
        d = (int**) malloc (r1 * sizeof (int*));
        for (int i = 0; i < r1; i++)
        {
            d [i] = (int*) malloc (c1 * sizeof (int));
        }

        printf ("Enter the elements in the matrix 1:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf ("%d", &a [i][j]);
            }
        }
        printf ("Enter the elements of the matrix 2:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf ("%d", &b [i][j]);
            }
        }

        printf ("The Sum of the 2 matrices is:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                c [i][j] = a [i][j] + b [i][j];
                printf ("%d\t", c [i][j]);
            }
            printf ("\n");
        }
        printf ("The Difference of the 2 matrices is:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                d [i][j] = a [i][j] - b [i][j];
                printf ("%d\t", d [i][j]);
            }
            printf ("\n");
        }

        free (a);
        free (b);
        free (c);
        free (d);
    }
    else
    {
        printf ("The dimensions of both the matrix shall be same for performing the addition and subtraction operations.\n");
    }
    return 0;
}
