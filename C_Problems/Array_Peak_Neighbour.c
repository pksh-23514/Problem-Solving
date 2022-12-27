/*
Name         : Prabhat Kiran
Description  : Find a peak element which is not smaller than its neighbours.
Sample Input : array[] = {10, 20, 15, 2, 23, 90, 67}
Sample Output: 20 or 90 (The element 20 has neighbors 10 and 15, both of them are less than 20, similarly 90 has neighbors 23 and 67.)
NOTE: For Boundary elements {0, n-1}, we need to consider only one Neighbor.
The following Corner cases shall be taken care while solving the problem:
1. If the input array is sorted in a strictly increasing order, the last element is always a peak element. For example, 50 is peak element in {10, 20, 30, 40, 50}.
2. If the input array is sorted in a strictly decreasing order, the first element is always a peak element. 100 is the peak element in {100, 80, 60, 50, 20}.
3. If all elements of the input array are the same, every element is a peak element.
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements in the Array:\n");
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr [i]);
	}

	int peak = arr [0];		//Assume, the Peak element is found at the First Position of the Array.

	for (int i = 1; i < n; i++)	//The loop shall run till the Last Position element is checked.
	{
		if (arr [i] > arr [i - 1])	//If the Current Position element is greater than the Previous Position element.
		{
			/* If the Current Position is not equal to the Last Position and Current Position element is greater than Next Position element */
			if (((i + 1) != n) && (arr [i] > arr [i + 1]))
			{
				peak = arr [i];		//Update the Current Position element as the Peak element.
				break;
			}
			/* Special Case: If the Current Position is equal to the Last Position, there cannot be any comparision with the Next Position element */
			else if ((i + 1) == n)
			{
				peak = arr [i];		//Update the Last Position element as the Peak element.
			}
		}
	}

	printf ("The Peak Element in the given Array is: %d\n", peak);

	return 0;
}
