/*
   C++ Program to Check if a Number is an Adam Number.
   1. The number to be checked is entered.
   2. It is squared and reversed.
   3. Square root of the reversed number is found.
   4. It is reversed again and compared with the original number.
   5. If they are same, the number entered is an Adam number, else not.
   6. Then result is printed.
   7. Exit.
 */

#include <iostream>
#include <cmath>
using namespace std;

int reverse (int n)
{
	int rev = 0;

	while (n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}

	return rev;
}

int main()
{
	int num;
	cout << "Enter the Number to be checked: ";
	cin >> num;

	int sqr = num * num;
	int rev = reverse (sqr);
	int srt = sqrt (rev);
	rev = reverse (srt);

	if (rev == num)
		cout << num << " is an Adam Number" << endl;
	else
		cout << num << " is not an Adam Number" << endl;

	return 0;
}
