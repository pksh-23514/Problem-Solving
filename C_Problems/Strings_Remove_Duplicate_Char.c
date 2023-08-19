#include <stdio.h>

int main()
{
	char buf [256] = {0};
	char str [100];
	int pos = 0, res = 0;
	printf ("Enter the String whose Duplicate characters need to be removed: ");
	scanf ("%99[^\n]", str);

	while (str [pos] != '\0')	//The loop shall run till the String terminates.
	{
		char ch = str [pos];	//To map the current Character to the Buffer array index.

		if (buf [ch] == 0)		//If the Buffer array for the particular index is Clear, the Character is encountered for the first time.
		{
			buf [ch] = 1;		//Set the Buffer array for the particular index.
			str [res++] = ch;	//Update the Character to the 'str' at the position 'res'. The res will keep the track of Non-Duplicate Character's position.
		}

		pos += 1;				//If the Buffer array for the particular index is Set, the Character is already encountered before. So, move to the next Character by updating 'pos'.
	}

	str [res] = '\0';			//To terminate the String with Non-Duplicate Characters at the position 'res'.
	printf ("The String after removing Duplicate characters is: %s\n", str);

	return 0;
}
