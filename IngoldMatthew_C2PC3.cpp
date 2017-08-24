// Chapter 2, Programming Challenge #3
// C2PC3.cpp
// Matt Ingold
// 1/24/2017



// A program that will compute the total sales tax on a purchase.
#include <iostream>
using namespace std;

int main()
{
	// Declare variables
	double purchasePrice = 95.00;
	double stateTaxRate = .04;
	double countyTaxRate = .02;
	double totalSalesTax;

	// Compute total state & county taxes
	totalSalesTax = purchasePrice * (stateTaxRate + countyTaxRate);
	
	// Display sales tax to the user
	cout << "The total sales tax on a $" << purchasePrice << " purchase is $" << totalSalesTax;
	return 0;
}