/* To Shift all the 0's in the Array to Start End.
   Eg. => 0 1 2 0 0 3 will become 0 0 0 1 2 3
 */

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the number of elements to be stored in the Array: ");
	scanf ("%d", &n);
	int a [n];
	printf ("Enter the %d array elements:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a [i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			//Bubble Sort Logic to push the '0' to the previous position i.e from 'j+1' to 'j'. Lastly, all 0's will reach to positions from beginning.
			if (a [j + 1] == 0)
			{
				a [j] = a [j] ^ a [j + 1];
				a [j + 1] = a [j] ^ a [j + 1];
				a [j] = a [j] ^ a [j + 1];
			}
		}
	}

	printf ("The array with the zeros shifted to one side of the Array is:\n");
	for (int i = 0; i < n; i++)
	{
		printf ("%d ", a [i]);
	}
	printf ("\n");
	return 0;
}
