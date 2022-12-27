/*
Name         : Prabhat Kiran
Date         : 8th December 2022
Description  : Convert the Number to Words.
Sample Input : 1346
Sample Output: One Thousand Three Hundred Forty Six
*/

#include <stdio.h>

/* Array of Strings required for the Conversion upto 5-digit Number */
char* zero [10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char* tens [10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char* spec [10] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred", "Thousand"};

void one_digit (int);
void two_digit (int);
void three_digit (int);
void four_digit (int);

int main()
{
	int num;
	printf ("Enter the Number to be converted in the Word form: ");
	scanf ("%d", &num);

	if (num < 0)										//Error Handling.
	{
		printf ("The Number shall be a Positive Number.\n");
		return 0;
	}

	int orig = num, count = 0;

	while (orig != 0)									//To Count how many Digits are present in the Number.
	{
		count += 1;
		orig = orig / 10;
	}

	printf ("The Number in Word form is: ");

	if ((count == 0) || (count == 1))					//If the Number is Zero or contains One Digit.
	{	
		one_digit (num);
	}
	else if (count == 2)								//If the Number contains Two digits.
	{
		two_digit (num);
	}
	else if (count == 3)								//If the Number contains Three digits.
	{
		three_digit (num);
	}
	else if (count == 4)								//If the Number contains Four digits.
	{
		four_digit (num);
	}

	printf ("\n");
	return 0;
}

void one_digit (int num)
{
	printf ("%s", zero [num]);							//The Word displaying the Units place. The array 'zero' is mapped in such a way that the index is 'num'.
}

void two_digit (int num)
{
	if ((num > 9) && (num < 20))						//If the value of 'num' lies in the range of 10 to 19, only one Word shall be printed.
	{
		printf ("%s", tens [(num % 10)]);				//The array 'tens' is mapped in such a way that the index is 'num % 10'.
	}
	else												//If the value of 'num' is greater than 19, either one or two Words shall be printed.
	{
		printf ("%s", spec [(num / 10) - 2]);			//The Word displaying the Tens place. The array 'spec' is mapped in such a way that the index is '(num / 10) - 2'.

		if ((num % 10) != 0)							//If the value of 'num' is not divisible by 10 completely, one more Word shall be printed.
		{
			printf (" ");
			one_digit (num % 10);						//The Word displaying the Units place.
		}
	}
}

void three_digit (int num)
{
	printf ("%s %s", zero [(num / 100)], spec [8]);		//The Word displaying the Hundreth place. The array 'zero' is mapped in such a way that the index is 'num / 100'.

	if ((num % 100) != 0)								//If the value of 'num' is not divisible by 100 completely, more Words shall be printed.
	{
		int rem = num % 100;
		if ((rem > 0) && (rem < 10))					//If the value of 'num' lies in the range of 1 to 9, only one Word shall be printed.
		{
			printf (" ");
			one_digit (rem);							//The Word displaying the Units place.
		}
		else											//Otherwise, 2 Words shall be printed.
		{
			printf (" ");
			two_digit (num % 100);						//The Word displaying the Tens place.
		}
	}
}

void four_digit (int num)
{
	printf ("%s %s", zero [(num / 1000)], spec [9]);	//The Word displaying the Thousandth place. The array 'zero' is mapped in such a way that the index is 'num / 1000'.

	if ((num % 1000) != 0)								//If the value of 'num' is not divisible by 1000 completely, more Words shall be printed.
	{
		int rem = num % 1000;
		if ((rem > 0) && (rem < 10))					//If the value of 'num' lies in the range of 1 to 9, only one Word shall be printed.
		{
			printf (" ");
			one_digit (rem);							//The Word displaying the Units place.
		}
		else if ((rem > 9) && (rem < 100))				//If the value of 'num' lies in the range of 10 to 99, one or two Words shall be printed.
		{
			printf (" ");
			two_digit (rem);							//The Word displaying the Tens place.
		}
		else											//Otherwise, 3 Words shall be printed.
		{
			printf (" ");
			three_digit (rem);							//The Word displaying the Hundredth place.
		}
	}
}
