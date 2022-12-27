/*
Name         : Prabhat Kiran
Date         : 26th November 2022
Description  : Odd Numbered Letters are to be replaced by their Alphabetic opposites. Even Numbered Letters are to be replaced by 2 Characters - itself and their Alphabetic opposites.
Sample Input : ABC	| XYZ	| GHI	| NOP	| JKL	| UTS
Sample Output: ZBYX	| XCBZA	| THSR	| NMLPK	| JQPLO	| FTGH
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encoder (char []);	//Function to perform Encoding.
char* decoder (char []);	//Function to perform Decoding.

int main()
{
	char str [100];
	printf ("Enter the String to be Encoded: ");
	scanf ("%s", str);

	char* e_data = (char*) malloc (100 * sizeof (char));
	e_data = encoder (str);
	printf ("The Encoded String is: %s\n", e_data);
	free (e_data);

	memset (str, '\0', 100);
	printf ("Enter the String to be Decoded: ");
	scanf ("%s", str);

	char* d_data = (char*) malloc (100 * sizeof (char));
	d_data = decoder (str);
	printf ("The Decoded String is: %s\n", d_data);
	free (d_data);

	return 0;
}

char* encoder (char str [])
{
	char c [26];
	char* s = (char*) malloc (100 * sizeof (char));
	int i = 0, j = 0;
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		c [i++] = ch;
	}

	int len = strlen (str);

	for (i = 0; i < len; i++)
	{
		int diff = str [i] - 'A' + 1;	//To find the current character's position.
		if (diff % 2 == 1)		//If the 'diff' value is Odd, add the mirror reflection of the current character.
		{
			s [j++] = c [26 - diff];
		}
		else	//Otherwise, add the current character as well as the mirror reflection of the current character.
		{
			s [j++] = str [i];
			s [j++] = c [26 - diff];
		}
	}

	s [j] = '\0';	//Null Termination.

	return s;
}

char* decoder (char str [])
{
	char c [26];
	char* s = (char*) malloc (100 * sizeof (char));
	int i = 0, j = 0;
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		c [i++] = ch;
	}

	int len = strlen (str);
	for (i = 0; i < len; i++)
	{
		//In the Encoded string, the 'diff' for any character will always come as an Even number only. So, the next character shall be checked.
		int diff = str [i] - 'A' + 1;

		//If the next character is a mirror reflection of the current character; the current character shall be copied directly.
		if ((str [i + 1] == c [26 - diff]))
		{
			s [j++] = str [i];
			i++;	//The next character shall be ignored as while encoding, we added 2 characters for the Even positioned Letter.
		}
		else
		{
			//Otherwise, the mirror image of the current character shall be copied as while encoding, it was an Odd positioned Letter.
			s [j++] = c [26 - diff];
		}
	}
	
	s [j] = '\0';	//Null Termination.
	
	return s;
}
