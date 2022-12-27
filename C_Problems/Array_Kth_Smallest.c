/*
Name         : Prabhat Kiran
Description  : Given an array and a number K where K is smaller than the size of the Array. Find the K’th Smallest element in the given Array. Given that all Array elements are "distinct".
Sample Input : arr[] = {7, 10, 4, 3, 20, 15} and K = 3
Sample Output: 7
 */

#include <stdio.h>

void quick_sort (int*, int, int);
int partition (int*, int, int);

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr [i]);
	}

	int k;
	printf ("Enter the value of K: ");
	scanf ("%d", &k);

	quick_sort (arr, 0, n-1);		//Sort the given Array using Quick Sort Technique.

	/* The idea is to Sort the Array elements (with no Duplicates). The Array element at (K-1) index will be the Kth Smallest Element in the Array.
	   Here the Sorting is done in Ascending Order as we have to find the Kth smallest element in the Array.
	   For finding the Kth Largest element in the Array: Sort the Array in Descending Order and return the Array element at (K-1) index.
	 */

	printf ("The '%d'th Smallest Element in the Array is: %d\n", k, arr [k - 1]);

	return 0;
}

void quick_sort (int a [], int first, int last)
{
	if (first >= last)
		return;

	int pi = partition (a, first, last);	//To find the Partition Index.
	quick_sort (a, first, pi);		//Sort the Left Sub-Array from the Partition Index.
	quick_sort (a, (pi + 1), last);		//Sort the Right Sub-Array from the Partition Index.
}

int partition (int a [], int low, int high)
{
	int pivot = a [low];	//Update the Pivot element as the First Array Element.
	int i = low - 1;	//The indicator to traverse the Array from the Lower end.
	int j = high + 1;	//The indicator to traverse the Array from the Higher end.

	while (1)
	{
		do
		{
			i += 1;
		} while (a [i] < pivot);	//Find the Array Element greater than the Pivot and on the Left side of the Pivot.

		do
		{
			j -= 1;
		} while (a [j] > pivot);	//Find the Array Element smaller than the Pivot and on the Right side of the Pivot.

		if (i >= j)			//If the Left indicator surpasses the Right indicator, return the 'j' as the Partition index.
			return j;

		a [i] = a [i] ^ a [j];		//Otherwise, Swap the Array Elements found at the indices 'i' and 'j'.
		a [j] = a [i] ^ a [j];
		a [i] = a [i] ^ a [j];
	}
}
