// Chapter 2, Program 2-25
// P2-25.cpp
// Matt Ingold
// 1/24/2017



// This program converts seconds to minutes and seconds.
#include <iostream>
using namespace std;

int main()
{
	// The total seconds is 125.
	int totalSeconds = 125;

	// Variables for the minutes and seconds
	int minutes, seconds;

	// Get the number of minutes.
	minutes = totalSeconds / 60;

	// Get the remaining seconds.
	seconds = totalSeconds % 60;

	// Display the results.
	cout << totalSeconds << " seconds is equivalent to:\n";
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	system("pause");
	return 0;

}