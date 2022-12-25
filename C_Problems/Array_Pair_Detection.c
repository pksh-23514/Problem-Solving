/*
Name         : Prabhat Kiran
Date         : 27th November 2022
Description  : To find the Odd number Occuring Element in the Array.
Sample Input : 12, 12, 14, 90, 14, 14, 14.
Sample Output: 90
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Size of the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr [i]);
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res = res ^ arr [i];
	}

	if (res != 0)
		printf ("The Odd number Occuring Element in the given array is: %d\n", res);
	else
		printf ("No Odd number Occuring Element in the given array.\n");

	return 0;
}
