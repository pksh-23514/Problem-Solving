/*
Name         : Prabhat Kiran
Date         : 22nd December 2022
Description  : WAP to Move all the instances of a Number in the Array to the Start of the Array.
Sample Input : 2 1 2 3 4 2 2 2 2 and "2"
Sample Output: 2 2 2 2 2 2 4 3 1
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
		scanf ("%d", &arr [i]);

	int num;
	printf ("Enter the Element in the Array to be moved to the Last: ");
	scanf ("%d", &num);

	int start = 0, end = n - 1;

	while (start < end)
	{
		/* To Traverse the Array from the Left end and find the position having value other than 'num' in the Array */
		while ((start < end) && (arr [start] == num))
			start++;

		/* To Traverse the Array from the Right end and find the position having 'num' in the Array */
		while ((start < end) && (arr [end] != num))
			end--;

		/* Swap the position having 'num' from the Right end to the position not having 'num' on the Left end. The 'num' starts to accumulate on the Left */
		int temp = arr [start];
		arr [start] = arr [end];
		arr [end] = temp;
	}

	for (int i = 0; i < n; i++)
		printf ("%d ", arr [i]);
	printf ("\n");

	return 0;
}
