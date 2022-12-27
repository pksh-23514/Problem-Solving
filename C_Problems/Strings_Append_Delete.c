/*
Name         : Prabhat Kiran
Date         : 22nd December 2022
Description  : You have TWO Strings of Lowercase English letters. You can perform two types of operations on the First String:
1. Append a lowercase English letter to the end of the String.
2. Delete the Last character of the String. Performing this Operation on an Empty String results in an Empty String.
Given an Integer 'k' and two Strings 's' and 't': Determine whether or not you can convert 's' to 't'  by performing "Exactly 'k'of the above Operations" on the Strings.
If it's possible, print Yes. Otherwise, print No. The Number of Operations 'k' shall be exhausted completely either by Useful or Empty Operations.

Sample Input : "abc" and "def" and "6"
Sample Output: YES
Explanation: To convert 's' to 't', we first Delete all of the characters in '3' moves. Next we Add each of the characters of 't' in order. On the '6' move; you will have the Matching String (YES).
=> If there were more Moves available, they could have been eliminated by performing multiple Deletions on an Empty String.
=> If there were fewer Moves, we would not have Succeeded in Creating the New String.

Some more Samples:
1. hackerhappy hackerrank 9 => YES
2. aba aba 7 => YES
3. zzzzz zzzzzzz 4 => YES
4. qwerasdf qwerbsdf 6 => NO
5. y yu 2 => NO
6. abcd abcdert 10 => NO
7. ashley ash 2 => NO
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s [20], t [20];
	int k;
	printf ("Enter the First String (in Lowercase): ");
	scanf ("%19s", s);
	printf ("Enter the Second String (in Lowercase): ");
	scanf ("%19s", t);
	printf ("Enter the Number of Operations within which the First String shall become Second String: ");
	scanf ("%d", &k);

	int l1 = strlen (s);
	int l2 = strlen (t);
	int i = 0, j = 0;

	/* To find the Position of the First Mismatched Character in both the Strings */
	while ((s [i] != '\0') && (t [i] != '\0') && (s [i] == t [i]))
	{
		i += 1;
	}

	int moves = l1 + l2 - (2 * i);		//To calculate the Number of Operations required to Convert the First String into the Second String.

	/* The Conversion is only Successful in the following conditions:
	   1. If the value of 'k' is greater than the Combined Lengths of the Strings. Irrespective of the Number of Operations, Conversion is Successful.
	   2. If the value of 'k' is greater than the Number of Operations required for Conversion and the remaining Moves shall be exhausted by performing Empty Operations shall be Even.
	   Eg - If the difference is 3; you can perform one Deletion and one Addition on the Empty String. But still 1 Move will be left and this cannot be exhausted by any means.
	 */
	if ((k >= l1 + l2) || ((moves <= k) && (((k - moves) % 2) == 0)))
		printf ("YES\n");
	else
		printf ("NO\n");

	return 0;
}
