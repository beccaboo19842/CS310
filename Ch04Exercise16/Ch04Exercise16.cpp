#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std; 
int main() {
	//Variable declarations 
	double netPrice;
	double copiesSold;

	// display print out numbers with precision
	cout << fixed << showpoint << setprecision(2);
		
	//Variable assignments
	cout << "What is the net price for each book sold?" << endl; 
	cin >> netPrice;

	cout << "How many copies were sold?" << endl; 
	cin >> copiesSold; 

	//Calculations 
	double option1, option2, option3; 
	const double option1UponDelivery = 5000.0;
	const double option1UponPublish = 20000.0;
	const double option2RoyaltyRate = 12.5 / 100.0;
	const double option3CopiesSold4k = 4000.0;
	const double option3RoyaltyRateBelow4k = 10.0 / 100.0;
	const double option3RoyaltyRateAbove4k = 14.0 / 100.0;

	option1 = option1UponDelivery + option1UponPublish;
	option2 = (netPrice * copiesSold * option2RoyaltyRate);
	if (copiesSold > option3CopiesSold4k)
		option3 = (option3CopiesSold4k * netPrice * option3RoyaltyRateBelow4k) + ((copiesSold - option3CopiesSold4k) * netPrice * option3RoyaltyRateAbove4k);
	else
		option3 = copiesSold * option3RoyaltyRateBelow4k;

	// Display all options and their royalties
	cout << "the royalties for option #1 are $" << option1 << endl;
	cout << "the royalties for option #2 are $" << option2 << endl;
	cout << "the royalties for option #3 are $" << option3 << endl;

	// identify best option
	if (option1 > option2 && option1 > option3)
		cout << "the best option is #1" << endl;
	else if (option2 > option1 && option2 > option3)
		cout << "the best option is #2" << endl;
	else
		cout << "the best option is #3" << endl;

	// Exit printout
	cout << "Press any key to continue..." << endl;
	_getch(); 

	return 0; 
}
