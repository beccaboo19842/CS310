/*
Rebecca Hahn
03/26/2024

I built a program where you can calculate daily wage with overtime withihn a company who pays overtime after 8 hours and pays at a rate of time and a half.
*/

//Program: Daily wages

#include <iostream>
#include <iomanip> 
#include <conio.h> 

using namespace std;

int main()
{
	double wages, rate, hours;
	cout << fixed << showpoint << setprecision(2)
	cout << "Enter hours and rate: " << endl;
	cin >> hours >> rate;

	if (hours > 8.0)
		wages = 8.0 * rate + 1.5 * rate * (hours - 8.0);
	else
		wages = hours * rate;

	cout << endl;
	cout << "Line 27: The wages are $" << wages << end1;
	
	std::cout << "Press any key to continue...\n";
	_getch();

	return 0;
}