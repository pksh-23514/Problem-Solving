/*
Name         : Prabhat Kiran
Date         : 20th December 2022
Description  : Given 2 non-empty Arrays, check if the Second Array is a Sub-Sequence of the First Array.
In mathematics, a subsequence of a given sequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing the order of the remaining elements.
Sample Input : [1, 3, 4] and [1, 2, 3, 4]
Sample Output: True
*/

#include <stdio.h>

int main()
{
	/* Total Count of the Elements in the Arrays */
	int array_ind, seq_ind;
	printf ("Enter the Number of Elements in the Main Sequence: ");
	scanf ("%d", &array_ind);
	printf ("Enter the Number of Elements in the Sub-Sequence: ");
	scanf ("%d", &seq_ind);

	/* Reading the Elements in both the Arrays */
	int array [array_ind], seq [seq_ind];
	printf ("Enter the Elements of the Main Sequence:\n");
	for (int i = 0; i < array_ind; i++)
		scanf ("%d", &array [i]);
	printf ("Enter the Elements of the Sub-Sequence:\n");
	for (int i = 0; i < seq_ind; i++)
		scanf ("%d", &seq [i]);

	int array_ptr = 0, seq_ptr = 0;
	while ((array_ptr < array_ind) && (seq_ptr < seq_ind))		//The loop shall run till any one of the Array terminates
	{
		if (array [array_ptr] == seq [seq_ptr])					//If the Main Sequence and Sub-Sequence element matches, move the 'seq_ptr' to the next element of the Sub-Sequence.
			seq_ptr += 1;

		array_ptr += 1;											//Increment the 'array_ptr' irrespective of any matching condition.
	}

	if (seq_ptr == seq_ind)										//If the 'seq_ptr' points to the End of the Sub-Sequence Array; it is a Sub-Sequence of the Main Sequence Array.
		printf ("True\n");
	else
		printf ("False\n");

	return 0;
}
