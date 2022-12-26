/*
Name         : Prabhat Kiran
Date         : 23rd December 2022
Description  : WAP to find the Pair of Elements with the Smallest Difference between the Elements from TWO different Arrays.
Sample Input : [-1 5 10 20 28 3] and [26 134 135 15 17]
Sample Output: [28 26]
*/

#include <stdio.h>
#include <limits.h>

/* To sort the Arrays using Bubble Sort technique */
void sort (int* arr, int n)
{
	int flag;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (arr [j] > arr [j + 1])
			{
				arr [j] = arr [j] ^ arr [j + 1];
				arr [j + 1] = arr [j] ^ arr [j + 1];
				arr [j] = arr [j] ^ arr [j + 1];
				flag = 1;
			}
		}
		
		if (flag == 0)
			break;
	}
}

int main()
{
	int n1, n2;
	printf ("Enter the number of Elements in the First and Second Arrays: ");
	scanf ("%d %d", &n1, &n2);

	int a1 [n1], a2 [n2];
	printf ("Enter the Elements of the First Array:\n");
	for (int i = 0; i < n1; i++)
		scanf ("%d", &a1 [i]);
	printf ("Enter the Elements of the Second Array:\n");
	for (int i = 0; i < n2; i++)
		scanf ("%d", &a2 [i]);

	int currDiff, minDiff = INT_MAX;	//To store the Differences between the Array elements.
	int ptr1 = 0, ptr2 = 0;				//To track the Arrays.
	int pair [2];

	/* The Arrays shall be sorted for the logic to work */
	sort (a1, n1);
	sort (a2, n2);

	/* The loop shall run till we reach the end of one of the Arrays */
	while ((ptr1 < n1) && (ptr2 < n2))
	{
		/* Find the Absolute difference between the Array elements at the positions 'p1' and 'p2' */
		currDiff = (a1 [ptr1] > a2 [ptr2]) ? (a1 [ptr1] - a2 [ptr2]) : (a2 [ptr2] - a1 [ptr1]);

		if (currDiff < minDiff)			//If the Current Element's difference is found to be less than the Minimum difference found until now, store the Pair of the Array Elements.
		{
			minDiff = currDiff;			//To update the Minimum difference.
			pair [0] = a1 [ptr1];		//Update the Pair with the First Array's current element.
			pair [1] = a2 [ptr2];		//Update the Paur with the Second Array's current element.
		}

		/* Since both the Arrays are Sorted, the Current difference will always be greater than the difference between the elements with the updated Index (either 'ptr1' or 'ptr2').
		   Eg. => a1[ptr1] = 5, a1[ptr1+1] = 9, a2[ptr2] = 20 and currDiff = (20-5) = 15. So, minDiff = 15.
		   Then => (a1[ptr1] < a2[ptr2]; so ptr1++ is done and ptr2 is kept same. Now, the currDiff = (20-9) = 11 which is smaller than the minDiff.
		   This shall continue for 'ptr1' till a1[ptr1] becomes greater than a2[ptr2]. Then, again 'ptr2' is incremented keeping 'ptr1' as same with the same logic.
		 */
		if (a1 [ptr1] < a2 [ptr2])		//If the First Array's current element is smaller than the Second Array's current element; update the 'ptr1'.
		{
			ptr1 += 1;					//To check for the Difference between the Second Array's current element and First Array's next element.
			continue;
		}
		if (a2 [ptr2] <= a1 [ptr1])		//If the First Array's current element is larger than the Second Array's current element; update the 'ptr2'.
		{
			ptr2 += 1;					//To check for the Difference between the First Array's current element and Second Array's next element.
			continue;
		}
	}

	printf ("The Array Element Pair with the Minimum Difference is: %d %d\n", pair [0], pair [1]);

	return 0;
}
