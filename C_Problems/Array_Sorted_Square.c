/*
Name         : Prabhat Kiran
Date         : 20th December 2022
Description  : WAP that takes a Sorted (Ascending order) non-empty Integer Array and prints the Squares of each Element in Sorted (Ascending order).
Sample Input : [-3, 1, 2]
Sample Output: [1, 4, 9]
*/

#include <stdio.h>

int absolute (int x)
{
	return ((x >= 0) ? x : (-x));
}

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int a [n], res [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
		scanf ("%d", &a [i]);

	/* Optimal Solution with TC = O(n) */

	int start = 0, end = n - 1;										//To track the Start and End index of the Input Array.
	for (int i = (n - 1); i >= 0; i--)								//Start filling the Result Array in Decreasing Order fashion.
	{
		/* Since, the Array is Sorted; the largest Absolute value among the Start and End position will have the Largest Square */
		if ((absolute (a [start])) > (absolute (a [end])))			//If the Start element is Larger, Square the element and store it in the 'ith' position of the Result Array.
		{
			res [i] = a [start] * a [start];
			start++;												//Increment the Start index to point to the Next element for next comparision.
		}
		else														//Otherwise, the End element is Larger, Square the element and store it in the 'ith' position of the Result Array.
		{
			res [i] = a [end] * a [end];
			end--;													//Decrement the End index to point to the Previous element for next comparision.
		}
	}

	printf ("The Squares of the Array Elements in the Sorted Array is:\n");
	for (int i = 0; i < n; i++)
		printf ("%d ", res [i]);
	printf ("\n");

	return 0;
}
