/*
Name         : Prabhat Kiran
Date         : 30th December 2022
Description  : Julius Caesar protected his confidential information by encrypting it using a Cipher. Caesar's Cipher shifts each letter by a number of letters.
If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. Suppose the shifting is done by 3:
Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc
Sample Input : Always-Look-on-the-Bright-Side-of-Life
Sample Output: Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str [100];
	printf ("Enter the String to be Encrypted: ");
	scanf ("%s", str);

	int k;
	printf ("Enter the Number by which the Alphabets are shifted: ");
	scanf ("%d", &k);

	int i = 0;
	while (str [i] != '\0')		//The loop shall run till the end of the String is reached.
	{
		if ((str [i] >= 'a') && (str [i] <= 'z'))	//If the Character is a Lowercase alphabet.
		{
			str [i] = (((str [i] - 'a') + k) % 26) + 'a';	//For Circular rotation of the Alphabets in the String.
		}
		else if ((str [i] >= 'A') && (str [i] <= 'Z'))	//If the Character is a Uppercase alphabet.
		{
			str [i] = (((str [i] - 'A') + k) % 26) + 'A';	//For Circular rotation of the Alphabtets in the String.
		}
		i+=1;

	}

	printf ("%s\n", str);
	return 0;
}
