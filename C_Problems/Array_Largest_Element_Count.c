#include <stdio.h>

int find_Max_count (int* a, int n)
{
	int max = a [0], count = 1;		//Assign the first element of the Array as the Maximum value and number of Occurences as 1.

	for (int i = 1; i < n; i++)		//The loop shall run till the end of the Array.
	{
		if (a [i] > max)			//If the Array element is greater than the 'max'; update the 'max' to Array element and reset the 'count' to 1.
		{
			max = a [i];
			count = 1;
		}
		else if (a [i] == max)		//Otherwise, if the Array element is equal to the 'max'; then increase the 'count' by 1.
		{
			count += 1;
		}
	}

	return count;					//Return the number of Ocuurences of the Maximum value.
}

int main()
{
	int n;
	printf ("Enter the Size of the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements of the Array: ");
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr [i]);
	}

	int count = find_Max_count (arr, n);

	printf ("The Number of Occurences of the Maximum element in the Array is: %d\n", count);

	return 0;
}
