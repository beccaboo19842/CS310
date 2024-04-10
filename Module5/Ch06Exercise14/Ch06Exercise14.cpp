/*
Rebecca Hahn
CS 310
Professor Krasso
04/10/2024
Tax program
*/

#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;

double billingAmountCalculator(int hourlyRate, int totalConsultingtime, string isLowIncome) {
	//Calculations 
	double billingAmount = 0.0;
	const double lowIncomeConsultingTime = 30.0;
	const double otherIncomeConsultingTime = 20.0;
	const double lowIncomeServiceCharges = 0.4;
	const double otherIncomeServiceCharges = 0.7;
	
	if (isLowIncome == "Y") {
		if (totalConsultingtime <= lowIncomeConsultingTime)
			billingAmount = 0.0;
		else
			billingAmount = hourlyRate * lowIncomeServiceCharges * (totalConsultingtime - lowIncomeConsultingTime) / 60; 

	}
	else {
		if (totalConsultingtime <= otherIncomeConsultingTime)
			billingAmount = 0.0;
		else
			billingAmount = hourlyRate * otherIncomeServiceCharges *
			(totalConsultingtime - otherIncomeConsultingTime) / 60; 


	}
	
	 

	return billingAmount;

}

int main() {
	//Variable declarations 
	int hourlyRate;
	int totalConsultingTime;
	string isLowIncome;


	// display print out numbers with precision
	cout << fixed << showpoint << setprecision(2);

	//Variable assignments
	cout << "What's the hourly rate? " << endl;
	cin >> hourlyRate;

	cout << "What's the total amount of consulting time? (in minutes)" << endl;
	cin >> totalConsultingTime;

	cout << "Is the client low income? (Y/N)" << endl;
	cin >> isLowIncome;


	// Display billing amount
	cout << "total billing amount: " << billingAmountCalculator(hourlyRate, totalConsultingTime, isLowIncome) << endl;


	// Exit printout
	cout << "Press any key to continue..." << endl;
	_getch();

	return 0;
}


