#include <stdio.h>
#include <stdlib.h>

void left_diagonal (int** a, int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                printf ("%d ", a [i][j]);
                break;
            }
        }
    }
	printf ("\n");
}

void right_diagonal (int** a, int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if ((i + j) == (r - 1))
			{
				printf ("%d ", a [i][j]);
				break;
			}
		}
	}
	printf ("\n");
}

int main()
{
    int** a;
    int r, c;
    printf ("Enter the number of Rows of the matrix: ");
    scanf ("%d", &r);
    printf ("Enter the number of Columns of the matrix: ");
    scanf ("%d", &c);
    if (r == c)         //The matrix should be a Square Matrix for the Diagonal to exist.
    {
        a = (int**) malloc (r * sizeof (int*));
        for (int i = 0; i < r; i++)
        {
            a [i] = (int*) malloc (c * sizeof (int));
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf ("%d", &a [i][j]);
            }
        }

		printf ("Left Diagonal: ");
        left_diagonal (a, r);
		printf ("Right Diagonal: ");
		right_diagonal (a, r);
        free (a);
    }
    else
    {
        printf ("The Matrix shall be a Square Matrix i.e. the number of Rows shall be equal to the number of Columns!\n");
    }

    return 0;
}
