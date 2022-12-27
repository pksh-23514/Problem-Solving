/*
Name         : Prabhat Kiran
Date         : 27th December 2022
Description  : WAP to return the Minimum Sum of Money that you cannot create from an Array of Positive integers representing the value of the Coins. The integers are not unique.
Sample Input : [5 7 1 1 2 3 22]
Sample Output: 20 (The sum of {5+7+1+1+2+3 = 19}. So, 20 and 21 cannot be created before we reach 22 in the Array. Minimum = 20.)
*/

#include <stdio.h>

/* To Sort the given Array using Bubble Sort Technique */
void sort (int* a, int n)
{
	int flag;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (a [j] > a [j+1])
			{
				int temp = a [j];
				a [j] = a [j+1];
				a [j+1] = temp;
				flag = 1;
			}
		}

		if (flag == 0)
			break;
	}
}

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int arr [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
		scanf ("%d", &arr [i]);

	sort (arr, n);

	/* The logic is to find a value of 'change' which when added with 1 will be less than any Element of the Array.
	   Eg. => Coins = [2 2 5] and change = 0.
	   => coins [0] = 2 > (change+1). That means, we cannot create 'change + 1' value of money with the given Array.
	   Eg. => Coint = [1 2 5] and change = 0.
	   => coins [2] = 5 > (change+1) as change = 3 {1+2}. That means, we cannot create 4 i.e. 'change + 1' with the given Array.
	   The Array shall be sorted first before applying this technique to increase the 'change' in a monotonic way.
	 */
	int change = 0;		//To store the Possible range of Money that can be created: 1 to 'change + 1'.
	int i = 0;			//To navigate the given Array.
	while (i < n)
	{
		if (arr [i] > (change + 1))		//If any given value of the Array is greater than the value of 'change + 1'; the 'change + 1' value is not possible to create.
			break;
		else			//Otherwise, add the current Element to the existing 'change'. This guarantees that until 'change', the money can be created with the Array.
		{
			change += arr [i];
			i += 1;
		}
	}

	printf ("The Minimum Sum of Money that cannot be created with the given Array is = %d\n", (change + 1));

	return 0;
}
