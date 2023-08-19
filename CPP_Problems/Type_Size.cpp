/*
   C++ Program to Find Size of int, float, double, string and char in Your System.
 */

#include <iostream>
using namespace std;

int main()
{
	cout << "The various Data-Types in C++ are:" << endl;
	cout << "Size of char = " << sizeof (char) << endl;
	cout << "Size of short = " << sizeof (short) << endl;
	cout << "Size of int = " << sizeof (int) << endl;
	cout << "Size of long = " << sizeof (long) << endl;
	cout << "Size of float = " << sizeof (float) << endl;
	cout << "Size of double = " << sizeof (double) << endl;
	cout << "Size of string = " << sizeof (string) << endl;
	cout << "Size of int Pointers = " << sizeof (int*) << endl;
	cout << "Size of char Pointers = " << sizeof (char*) << endl;
	cout << "Size of short Pointers = " << sizeof (short*) << endl;
	cout << "Size of long Pointers = " << sizeof (long*) << endl;
	cout << "Size of float Pointers = " << sizeof (float*) << endl;
	cout << "Size of double Pointers = " << sizeof (double*) << endl;

	return 0;
}
