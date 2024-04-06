/*
Rebecca Hahn
CS 310
Professor Krasso 
04/05/2024

This program tells you how many dishes Bianca can prepare 
*/

#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;
int main() {
	//Variable declarations 
	int a;
	int b;
	int t;
	 

	// display print out numbers with precision
	cout << fixed << showpoint << setprecision(2);

	//Variable assignments
	cout << "How many minutes does it take to prepare the first dish? " << endl;
	cin >> a;

	cout << "How many additional minutes does each dish take?" << endl;
	cin >> b;

	cout << "How many minutes does she have to prepare all of the dishes?" << endl;
	cin >> t;

	//Calculations 
	int numberOfDishes = 0;

	if (a > t) {
		numberOfDishes = 0;
	}
	else {
		int totalTime = a;
		for (int i = 1; totalTime < t; i++) {
			numberOfDishes = numberOfDishes+1; 
			totalTime = totalTime + b * i;
		}
	}

	// Display number of dishes
	cout << "number of dishes that can be made: " << numberOfDishes << endl;
	

	// Exit printout
	cout << "Press any key to continue..." << endl;
	_getch();

	return 0;
}
