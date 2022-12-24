/*
Name         : Prabhat Kiran
Description  : Count number of occurrences (or frequency) in a Sorted array. Expected time complexity is O(Log(n)). 
Sample Input : arr[] = {1, 1, 2, 2, 2, 2, 3} and x = 2
Sample Output: 4
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
	{
		scanf ("%d", &arr [i]);
	}

	int key;
	printf ("Enter the Element whose Frequency needs to be calculated: ");
	scanf ("%d", &key);

	int low = 0, high = n - 1, mid, flag = 0;
	while (low <= high)							//Implementing Binary Search to find whether the given Element is present in the Array or not.
	{
		mid = low + ((high - low) / 2);			//To find the Middle position of the given Array.

		if (arr [mid] == key)					//If the given Key is found in the Middle position, break the loop and Set the 'flag' as 1.
		{
			flag = 1;
			break;
		}
		else if (arr [mid] > key)				//In a Sorted Array, if the Key is smaller than the Middle element of the Array; search the Key in the Left Half of the Array.
			high = mid - 1;
		else if (arr [mid] < key)				//In a Sorted Array, if the Key is greater than the Middle element of the Array; search the Key in the Right Half of the Array.
			low = mid + 1;
	}

	if (flag == 1)								//If the Element is found in the Array, we shall proceed with the Frequency calculation.
	{
		int count = 1;							//Since, the Key is found in the Array, the 'count' shall be at least 1 for the Key.

		/* From the 'mid' position; traverse to the Left and increase the count till the Array elements are equal to the Key. */
		for (int left = mid - 1; arr [left] == key; left--)
			count++;

		/* From the 'mid' position; traverse to the Right and increase the count till the Array elements are equal to the Key. */
		for (int right = mid + 1; arr [right] == key; right++)
			count++;

		printf ("The Frequency of the Element %d in the Array is: %d\n", key, count);
	}
	else										//If the Key is not found in the Array, the Frequency of Occurence is '0'.
	{
		printf ("The Element %d is not present in the Array.\n", key);
	}
	
	return 0;
}
