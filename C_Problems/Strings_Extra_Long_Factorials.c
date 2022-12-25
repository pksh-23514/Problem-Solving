/*
Name         : Prabhat Kiran
Date         : 24th December 2022
Description  : The factorial of an integer "n" is given as [n! = n * (n-1) * (n-2)... * 2 * 1]. Factorials of n > 20 can't be stored even in a long long variable.
Big integers must be used for such calculations. Languages like Java, Python, Ruby etc. can handle big integers but we need to write additional code in C or C++ to handle Huge values.
Sample Input : 25
Sample Output: 15511210043330985984000000
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Number whose Factorial needs to be calculated: ");
	scanf ("%d", &n);

	char str [500] = {0};
	str [0] = '1';
	int prod, rem = 0;	//Initially, there will be no Remainder and later it will be calculated depending on the Number of Digits in the Product.
	int limit = 1;		//To track the number of Non-Zero digits stored in the 'str'. Initially, the value stored in 'str' is '1'; so the Limit is 1.

	/* The loop shall run from 2 to n for calculating the Factorial of 'n'. {Eg. => n! = 1 (from 'str') * 2 * 3 *...* (n-1) * n} */
	for (int i = 2; i <= n; i++)
	{
		/* The loop shall run to multiply the existing value stored in 'str' with the current Number to be multiplied in the Factorial.
		   The loop termination will be governed by 'limit'.
		   Eg. => Suppose 'str' has "24" (limit = 2) and 'i' is 5.
		   So, the factorial value will be updated by multiplying each digit in 'str' with 'i'. The loop shall run '2' times.
		 */
		for (int j = 0; j < limit; j++)
		{
			prod = ((str [j] - '0') * i) + rem;		//To multiply the digit at jth index of 'str' with i and add the remainder (if any) to obtain the final Product.
			str [j] = (prod % 10) + '0';			//To update the jth index of 'str' with the new value obtained from the multiplication.
			rem = prod / 10;						//To update the Remainder left after storing the digit obtained from the multiplication.
		}

		/* If the Overflow of Digits take place due to Multiplication, the Overflown digit shall be stored at the Higher index of 'str'.
		   The value of 'limit' shall be updated accordingly.
		   Eg. => Suppose 'str' has "24" (limit = 2) and 'i' is 5.
		   Product to be stored will be 120 but 'limit' is 2. So, the remaining '1' in 'rem' shall be stored separately.
		 */
		while (rem > 0)
		{
			str [limit++] = (rem % 10) + '0';
			rem = rem / 10;
		}
	}

	/* The Factorial is stored in 'str' from Units digit at LSB to Maximum digit towards MSB side.
	   So, to Display the Result, the loop shall run in the Reverse way.
	 */
	printf ("The Factorial for the Number %d is = ", n);
	for (int pos = (limit - 1); pos >= 0; pos--)
		printf ("%c", str [pos]);
	printf ("\n");

	return 0;
}
