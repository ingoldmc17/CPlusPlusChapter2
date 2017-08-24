// Chapter 2, Program 2-18
// P2-18.cpp
// Matt Ingold
// 1/24/2017



// This program determines the size of integers,
// long integers, and long doubles.
#include <iostream>
using namespace std;

int main()
{
	long double apple;

	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "An apple can be eaten in " << sizeof(apple);
	cout << " bytes!\n";
	return 0;
}