/*
   C++ Program to Print Armstrong Number between 1 to 1000.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int val, sum;
	cout << "The Armstrong Numbers between 1 to 1000 are: " << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				val = (i * 100) + (j * 10) + k;
				sum = pow (i, 3) + pow (j, 3) + pow (k, 3);

				if ((sum == val) && (val != 0))
				   cout << val << " ";
			}
		}
	}
	cout << endl;

	return 0;
}
