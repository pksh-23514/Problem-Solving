/*
Name         : Prabhat Kiran
Date         : 20th December 2022
Description  : WAP to print Alternate Letters from two Strings.
Sample Input : String-1 -> "hello" and String-2 -> "1234567"
Sample Output: h1e2l3l4o567
*/

#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	char str1 [30], str2 [30];

	printf ("Enter the First String: ");
	scanf ("%s", str1);
	printf ("Enter the Second String: ");
	scanf ("%s", str2);

	while ((str1 [i] != '\0') || (str2 [j] != '\0'))	//The loop shall run till both the Strings are terminated.
	{
		if (str1 [i] != '\0')	//If the String-1 has not terminated, print it's character.
		{
			printf ("%c", str1 [i]);
			i++;		//Increment the index for the String-1.
		}
		if (str2 [j] != '\0')	//If the String-2 has not terminated, print it's character.
		{
			printf ("%c", str2 [j]);
			j++;		//Increment the index for the String-2.
		}
	}
	printf ("\n");

	return 0;
}
